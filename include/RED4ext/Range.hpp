#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>

namespace RED4ext
{
template<typename T>
struct Range
{
    Range()
        : beginPtr(nullptr)
        , endPtr(nullptr)
    {
    }

    constexpr operator bool() const noexcept
    {
        return IsEmpty();
    }

    [[nodiscard]] inline T* begin() const
    {
        return beginPtr;
    }

    [[nodiscard]] inline T* end() const
    {
        return endPtr;
    }

    [[nodiscard]] inline bool IsEmpty() const
    {
        return !beginPtr;
    }

    [[nodiscard]] inline auto GetSize() const
    {
        return endPtr - beginPtr;
    }

    T* beginPtr; // 00
    T* endPtr;   // 08
};
RED4EXT_ASSERT_SIZE(Range<int32_t>, 0x10);
RED4EXT_ASSERT_OFFSET(Range<int32_t>, beginPtr, 0x0);
RED4EXT_ASSERT_OFFSET(Range<int32_t>, endPtr, 0x8);
} // namespace RED4ext
