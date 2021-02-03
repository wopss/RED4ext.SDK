#pragma once

#include <cstdint>
#include <functional>

#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
struct IMemoryAllocator;

#pragma region HashMapHash
    template<typename T, typename enable = void /* for enable_if specialization */>
    struct HashMapHash
    {
        uint32_t operator()(const T& aKey) const noexcept
        {
            // You can pass your own hasher as the 3rd template argument to the HashMap
            // Or you can make a specialized version of this class

            static_assert(false, "Please define a HashMapHash<T> specialization for your key type.");
        }
    };

    template<typename T>
    struct HashMapHash<T, std::enable_if_t<std::is_convertible_v<T, uint32_t>>>
    {
        // Let's give this a try :)

        uint32_t operator()(const T& aKey) const noexcept
        {
            return static_cast<uint32_t>(aKey);
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
        static const uint32_t INVALID_INDEX = -1;

        struct Node
        {
            uint32_t next;  // 00
            uint32_t index; // 04
            K key;          // 08
            T value;        // 10
        };

        void for_each(std::function<void(const K&, T&)> aFunctor) const
        {
            for (uint32_t index = 0; index != capacity; ++index)
            {
                uint32_t idx = indexTable[index];

                while (idx != INVALID_INDEX)
                {
                    Node* node = reinterpret_cast<Node*>(nodes + idx * stride);
                    if (!node)
                    {
                        break;
                    }

                    aFunctor(node->key, node->value);

                    idx = node->next;
                }
            }
        }

        T* Get(const K& aKey) const
        {
            Node* found = nullptr;
            uint32_t hashedKey = Hasher{}(aKey);
            uint32_t idx = indexTable[hashedKey % capacity];
            while (idx != INVALID_INDEX)
            {
                Node* node = reinterpret_cast<Node*>(nodes + idx * stride);
                if (node->index == hashedKey && node->key == aKey)
                {
                    found = node;
                    break;
                }

                idx = node->next;
            }

            if (found)
            {
                return &found->value;
            }

            return nullptr;
        }

        IMemoryAllocator* GetAllocator()
        {
            return reinterpret_cast<IMemoryAllocator*>(&allocator);
        }

        uint32_t* indexTable;   // 00
        uint32_t size;          // 08
        uint32_t capacity;      // 0C
        uintptr_t nodes;        // 10
        uint32_t unk18;         // 18
        uint32_t stride;        // 1C - sizeof(Node)
        uint32_t unk20;         // 20
        uint32_t unk24;         // 24
        uintptr_t allocator;    // 28
    };
    RED4EXT_ASSERT_SIZE(RED4EXT_ASSERT_ESCAPE(HashMap<uint64_t, void*>), 0x30);    
} // namespace RED4ext
