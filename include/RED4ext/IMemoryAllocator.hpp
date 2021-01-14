#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct IMemoryAllocator
{
    struct Result
    {
        void* memory;
        size_t size;
    };
    virtual Result Alloc(uint32_t aSize) = 0;
    virtual Result Alloc(uint32_t aSize, uint32_t aAlignment) = 0;
    virtual void sub_10() = 0;
    virtual void sub_18() = 0;
    virtual void Free(void* aMemory) = 0;
    virtual void sub_28(void* aMemory) = 0;
    virtual uint32_t GetId() = 0;
};
RED4EXT_ASSERT_SIZE(IMemoryAllocator, 0x8);
} // namespace RED4ext
