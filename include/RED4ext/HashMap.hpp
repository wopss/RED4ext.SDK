#pragma once

#include <RED4ext/Common.hpp>
#include <cstdint>
#include <functional>

namespace RED4ext
{
template<typename K, typename T>
struct HashMapBase
{
    static const uint32_t INVALID_INDEX = -1;

    struct Node
    {
        uint32_t next;  // 00
        uint32_t index; // 04
        K key;          // 08
        T value;        // 10
    };

    void for_each(std::function<void(const K, T&)> aFunctor)
    {
        uint32_t index = 0;
        uint32_t count = 0;
        while (1)
        {
            uint32_t idx = indexTable[index++];
            if (index >= capacity)
            {
                break;
            }

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

    // TODO: Support other hashing methods, this assumes FNV1a64, GameInstance uses CRC32
    T* Get(const K aKey) const
    {
        Node* found = nullptr;
        uint32_t idx = indexTable[static_cast<uint32_t>(aKey) % capacity];
        while (idx != INVALID_INDEX)
        {
            Node* node = reinterpret_cast<Node*>(nodes + idx * stride);
            if (node->index == static_cast<uint32_t>(aKey) && node->key == aKey)
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

    uint32_t* indexTable; // 00
    uint32_t size;        // 08
    uint32_t capacity;    // 0C
    uintptr_t nodes;      // 10
    uint32_t unk20;       // 18
    uint32_t stride;      // 1C - sizeof(Node)
    uint32_t unk28;       // 20
    uint32_t unk2C;       // 24
};
static_assert(sizeof(HashMapBase<uint64_t, void*>) == 0x28);

template<typename K, typename T>
struct HashMap : HashMapBase<K, T>
{
    virtual ~HashMap(){}; // Empty impl to indicate there's a vtable
};
static_assert(sizeof(HashMap<uint64_t, void*>) == 0x30);

} // namespace RED4ext
