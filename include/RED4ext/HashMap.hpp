#pragma once

#include <cstdint>
#include <functional>

#include <RED4ext/Common.hpp>
#include <RED4ext/Hashing/FNV1a.hpp>
#include <RED4ext/Memory/Allocators.hpp>

namespace RED4ext
{
#pragma region HashMapHash
template<typename T, typename enabled = void /* for enable_if specialization */>
struct HashMapHash
{
    uint32_t operator()(const T& aKey) const noexcept
    {
        // You can pass your own hasher as the 3rd template argument to the HashMap
        // Or you can make a specialized version of this class

        static_assert(!std::is_same_v<enabled, void>,
                      "Please define a HashMapHash<T> specialization for your key type");
    }
};

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_same_v<T, uint32_t>>>
{
    // Let's give this a try :)

    uint32_t operator()(const T& aKey) const noexcept
    {
        return static_cast<uint32_t>(aKey);
    }
};

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_same_v<T, uint64_t>>>
{
    uint32_t operator()(const T& aKey) const noexcept
    {
        return FNV1a32(reinterpret_cast<const uint8_t*>(&aKey), sizeof(uint64_t));
    }
};

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_pointer_v<T>>>
{
    // Used in TweakDB, probably the same for all pointer keys

    uint32_t operator()(const T& aKey) const noexcept
    {
        return FNV1a32(reinterpret_cast<const uint8_t*>(&aKey), sizeof(void*));
    }
};
#pragma endregion

template<typename K, typename T, typename Hasher = HashMapHash<K>>
struct HashMap
{
    static const uint32_t INVALID_INDEX = static_cast<uint32_t>(-1);

    struct Node
    {
        uint32_t next;      // 00
        uint32_t hashedKey; // 04
        K key;              // 08
        T value;            // 10
    };

    struct NodeList
    {
        Node* nodes;       // 00
        uint32_t capacity; // 08
        uint32_t stride;   // 0C - sizeof(Node)
        uint32_t nextIdx;  // 10 - next available node index to write to
        uint32_t size;     // 14

        NodeList(Node* aNodes = nullptr, uint32_t aCapacity = 0)
            : nodes(aNodes)
            , capacity(aCapacity)
            , stride(sizeof(Node))
            , nextIdx(aNodes ? 0 : -1)
            , size(0)
        {
        }

        Node* GetNextAvailNode()
        {
            if (nextIdx == -1)
                return nullptr;

            if (size == nextIdx)
            {
                if (size + 1 < capacity)
                {
                    ++size;
                    return &nodes[nextIdx++];
                }
                else
                {
                    Node* node = &nodes[nextIdx];
                    nextIdx = static_cast<uint32_t>(-1);
                    return node;
                }
            }
            else
            {
                Node* node = &nodes[nextIdx];
                nextIdx = node->next;
                return node;
            }
        }
    };

    HashMap(Memory::IAllocator* aAllocator = nullptr)
        : indexTable(nullptr)
        , size(0)
        , capacity(0)
    {
        // vftable because IMemoryAllocator is abstract
        allocator = aAllocator ? *reinterpret_cast<uintptr_t*>(aAllocator) : 0;
    }

    HashMap(const HashMap& aOther)
        : HashMap(aOther.GetAllocator())
    {
        CopyFrom(aOther);
    }

    HashMap(HashMap&& aOther) noexcept
    {
        MoveFrom(std::move(aOther));
    }

    ~HashMap()
    {
        if (capacity)
        {
            Clear();
            GetAllocator()->Free(nodeList.nodes);
            capacity = 0;
        }
    }

    HashMap& operator=(const HashMap& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Clear();
            CopyFrom(aOther);
        }

        return *this;
    }

    HashMap& operator=(HashMap&& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Clear();
            MoveFrom(std::move(aOther));
        }

        return *this;
    }

    void for_each(std::function<void(const K&, T&)> aFunctor) const
    {
        ForEach(aFunctor);
    }

    void ForEach(std::function<void(const K&, T&)> aFunctor) const
    {
        if (size == 0)
            return;

        for (uint32_t index = 0; index != capacity; ++index)
        {
            uint32_t idx = indexTable[index];
            while (idx != INVALID_INDEX)
            {
                Node* node = &nodeList.nodes[idx];
                aFunctor(node->key, node->value);
                idx = node->next;
            }
        }
    }

    T* Get(const K& aKey) const
    {
        if (size == 0)
            return nullptr;

        uint32_t hashedKey = Hasher{}(aKey);
        uint32_t idx = indexTable[hashedKey % capacity];
        while (idx != INVALID_INDEX)
        {
            Node* node = &nodeList.nodes[idx];
            if (node->hashedKey == hashedKey && node->key == aKey)
            {
                return &node->value;
            }

            idx = node->next;
        }

        return nullptr;
    }

    bool Contains(const K& aKey)
    {
        return Get(aKey) != nullptr;
    }

    bool Remove(const K& aKey)
    {
        if (size == 0)
            return false;

        uint32_t hashedKey = Hasher{}(aKey);
        uint32_t* idx = &indexTable[hashedKey % capacity];
        while (*idx != INVALID_INDEX)
        {
            Node* node = &nodeList.nodes[*idx];
            if (node->hashedKey == hashedKey && node->key == aKey)
            {
                *idx = node->next;
                node->~Node();
                node->next = nodeList.nextIdx;
                nodeList.nextIdx = static_cast<uint32_t>(node - nodeList.nodes);
                --size;
                return true;
            }
            idx = &node->next;
        }

        return false;
    }

    std::pair<T*, bool> Insert(const K& aKey, const T& aValue)
    {
        return Emplace(aKey, std::forward<const T&>(aValue));
    }

    std::pair<T*, bool> Insert(const K& aKey, T&& aValue)
    {
        return Emplace(aKey, std::forward<T&&>(aValue));
    }

    std::pair<T*, bool> InsertOrAssign(const K& aKey, const T& aValue)
    {
        std::pair<T*, bool> pair = Emplace(aKey, std::forward<const T&>(aValue));
        if (!pair.second)
        {
            *pair.first = aValue;
        }
        return pair;
    }

    std::pair<T*, bool> InsertOrAssign(const K& aKey, T&& aValue)
    {
        std::pair<T*, bool> pair = Emplace(aKey, std::forward<T&&>(aValue));
        if (!pair.second)
        {
            *pair.first = std::move(aValue);
        }
        return pair;
    }

    template<class... TArgs>
    std::pair<T*, bool> Emplace(const K& aKey, TArgs&&... aArgs)
    {
        uint32_t hashedKey = Hasher{}(aKey);

        if (size != 0 && indexTable[hashedKey % capacity] != -1)
        {
            uint32_t idx = indexTable[hashedKey % capacity];
            while (idx != INVALID_INDEX)
            {
                Node* node = &nodeList.nodes[idx];
                if (node->hashedKey == hashedKey && node->key == aKey)
                {
                    return {&node->value, false};
                }

                idx = node->next;
            }
        }

        if (size + 1 > capacity)
        {
            uint32_t newCapacity = size + (size / 2);
            if (newCapacity < 4)
                newCapacity = 4;
            Reserve(newCapacity);
        }

        // shouldn't be null. The game doesn't even check
        Node* node = nodeList.GetNextAvailNode();
        node->hashedKey = hashedKey;
        new (&node->key) K(aKey);
        new (&node->value) T(std::forward<TArgs>(aArgs)...);
        node->next = indexTable[hashedKey % capacity];
        indexTable[hashedKey % capacity] = static_cast<uint32_t>(node - nodeList.nodes);
        ++size;
        return {&node->value, true};
    }

    void Clear()
    {
        for (uint32_t i = 0; i != capacity; ++i)
        {
            uint32_t idx = indexTable[i];
            while (idx != INVALID_INDEX)
            {
                Node* node = &nodeList.nodes[idx];
                idx = node->next;
                node->~Node();
            }

            indexTable[i] = static_cast<uint32_t>(-1);
        }
        size = 0;
        nodeList.nextIdx = 0;
        nodeList.size = 0;
    }

    void Reserve(uint32_t aSize)
    {
        if (aSize <= capacity)
            return;

        uint32_t requiredBytes = aSize * (sizeof(Node) + 4 /* *indexTable */);
        auto allocResult = GetAllocator()->AllocAligned(requiredBytes, 8);
        memset(allocResult.memory, 0, allocResult.size);
        NodeList newNodeList(reinterpret_cast<Node*>(allocResult.memory), aSize);
        uint32_t* newIndexTable = reinterpret_cast<uint32_t*>((uintptr_t)allocResult.memory + (aSize * sizeof(Node)));

        for (uint32_t i = 0; i != aSize; ++i)
        {
            newIndexTable[i] = static_cast<uint32_t>(-1);
        }

        if (capacity != 0)
        {
            if (size != 0)
            {
                for (uint32_t i = 0; i != capacity; ++i)
                {
                    uint32_t idx = indexTable[i];
                    while (idx != INVALID_INDEX)
                    {
                        Node* oldNode = &nodeList.nodes[idx];
                        uint32_t hashedKey = oldNode->hashedKey;

                        Node* node = newNodeList.GetNextAvailNode();
                        node->hashedKey = hashedKey;
                        new (&node->key) K(std::move(oldNode->key));
                        new (&node->value) T(std::move(oldNode->value));
                        node->next = newIndexTable[hashedKey % aSize];
                        newIndexTable[hashedKey % aSize] = static_cast<uint32_t>(node - newNodeList.nodes);

                        idx = oldNode->next;
                        oldNode->~Node();
                    }

                    indexTable[i] = static_cast<uint32_t>(-1);
                }
            }

            GetAllocator()->Free(nodeList.nodes);
        }

        capacity = aSize;
        indexTable = newIndexTable;
        nodeList = newNodeList;
    }

    const Memory::IAllocator* GetAllocator() const
    {
        return reinterpret_cast<const Memory::IAllocator*>(&allocator);
    }

    void CopyFrom(const HashMap& aOther)
    {
        if (aOther.size != 0)
        {
            Reserve(aOther.capacity);

            for (uint32_t index = 0; index != aOther.capacity; ++index)
            {
                uint32_t idx = aOther.indexTable[index];
                while (idx != INVALID_INDEX)
                {
                    const Node* node = &aOther.nodeList.nodes[idx];
                    Insert(node->key, node->value);
                    idx = node->next;
                }
            }
        }
    }

    void MoveFrom(HashMap&& aOther)
    {
        indexTable = aOther.indexTable;
        size = aOther.size;
        capacity = aOther.capacity;
        nodeList = aOther.nodeList;
        allocator = aOther.allocator;

        if (aOther.capacity)
        {
            aOther.indexTable = nullptr;
            aOther.size = 0;
            aOther.capacity = 0;
            aOther.nodeList = NodeList();
        }
    }

    uint32_t* indexTable; // 00
    uint32_t size;        // 08
    uint32_t capacity;    // 0C
    NodeList nodeList;    // 10
    uintptr_t allocator;  // 28
};
RED4EXT_ASSERT_SIZE(RED4EXT_ASSERT_ESCAPE(HashMap<uint64_t, void*>), 0x30);
} // namespace RED4ext
