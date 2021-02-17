#pragma once

#include <cstdint>
#include <type_traits>

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
    virtual Result AllocAligned(uint32_t aSize, uint32_t aAlignment) = 0;
    virtual void sub_10() = 0;
    virtual void sub_18() = 0;
    virtual void Free(Result* aAllocResult) = 0;
    virtual void sub_28(void* aMemory) = 0;
    virtual uint32_t GetId() = 0;

    template<typename T, typename = std::enable_if_t<!std::is_pointer_v<T>, T*>>
    [[nodiscard]] T* Alloc()
    {
        auto result = Alloc(sizeof(T));
        return static_cast<T*>(result.memory);
    }

    void Free(void* aMemory)
    {
        Result allocResult;
        allocResult.memory = aMemory;
        allocResult.size = 0;
        Free(&allocResult);
    }
};
RED4EXT_ASSERT_SIZE(IMemoryAllocator, 0x8);

struct RTTIAllocator : IMemoryAllocator
{
    static RTTIAllocator* Get();
};
RED4EXT_ASSERT_SIZE(RTTIAllocator, 0x8);

struct RTTIFunctionAllocator : IMemoryAllocator
{
    static RTTIFunctionAllocator* Get();
};
RED4EXT_ASSERT_SIZE(RTTIFunctionAllocator, 0x8);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/MemoryAllocators-inl.hpp>
#endif
