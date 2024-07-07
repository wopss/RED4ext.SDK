#pragma once

#include <cstdint>
#include <shared_mutex>

#include <RED4ext/Common.hpp>
#include <RED4ext/Hashing/FNV1a.hpp>
#include <RED4ext/SharedSpinLock.hpp>

namespace RED4ext::Memory
{
struct Vault;

// Thanks @expired6978 for decoding the base structs.
struct PoolStorage
{
    uint64_t allocatorStorage;  // 00
    uint64_t bytesAllocated;    // 08
    uint64_t maxBytesAllocated; // 10
    void* oomHandler;           // 18
    uint32_t allocatorhandle;   // 20
    uint32_t allocatorId;       // 24

    template<typename T = void>
    T* GetAllocatorStorage() const
    {
        return reinterpret_cast<T*>(allocatorStorage & ~7);
    }
};
RED4EXT_ASSERT_SIZE(PoolStorage, 0x28);

struct PoolInfo
{
    uint64_t budget;                // 00
    uint64_t childrenBudget;        // 08
    PoolStorage* storage;           // 10
    PoolInfo* child;                // 18
    PoolInfo* sibling;              // 20
    char name[32];                  // 28
    uint32_t handle;                // 48
    bool contributeToParentMetrics; // 4C
    bool isMirrored;                // 4D
};
RED4EXT_ASSERT_SIZE(PoolInfo, 0x50);

struct PoolRegistry
{
    static constexpr auto MaxPoolCount = 768;

    SharedSpinLock nodesLock;     // 00
    PoolInfo nodes[MaxPoolCount]; // 08

    template<typename T = PoolInfo>
    T* Get(const char* aName)
    {
        const auto id = FNV1a32(aName);
        return Get<T>(id);
    }

    template<typename T = PoolInfo>
    T* Get(uint32_t aHandle)
    {
        std::shared_lock<SharedSpinLock> _(nodesLock);

        /* Did not find anything to do this in O(1), could do it with some caching, but a separate struct would have to
         * be mantained, which is an overkill for this. Code that is using this should cache the value in a static
         * variable if the code is critical.
         */
        for (uint32_t i = 0; i < MaxPoolCount; i++)
        {
            auto& node = nodes[i];
            if (node.handle == aHandle)
            {
                return reinterpret_cast<T*>(&node);
            }
        }

        return nullptr;
    }
};
RED4EXT_ASSERT_SIZE(PoolRegistry, 0xF008);
} // namespace RED4ext::Memory
