#pragma once

#include <algorithm>
#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Containers/ArrayIterator.hpp>

namespace RED4ext
{
template<typename T>
struct Span
{
    using ValueType = T;
    using Reference = ValueType&;
    using ConstReference = const ValueType;
    using Pointer = ValueType*;
    using ConstPointer = const ValueType*;

    using SizeType = std::uint32_t;
    using DifferenceType = std::ptrdiff_t;

    using Iterator = Detail::ArrayIterator<ValueType, Span>;
    using ConstIterator = Detail::ArrayIterator<const ValueType, Span>;

    Span()
        : beginPtr(nullptr)
        , endPtr(nullptr)
    {
    }

    Span(Pointer aBegin, Pointer aEnd)
        : beginPtr(aBegin)
        , endPtr(aEnd)
    {
    }

    Span(Pointer aBegin, SizeType aCount)
        : beginPtr(aBegin)
        , endPtr(aBegin + aCount)
    {
    }

    constexpr operator bool() const noexcept
    {
        return IsEmpty();
    }

    constexpr Reference operator[](SizeType aPos) const
    {
        assert(aPos < Size());
        return Data()[aPos];
    }

    constexpr ConstReference operator[](SizeType aPos) const
    {
        assert(aPos < Size());
        return Data()[aPos];
    }

    [[nodiscard]] constexpr Iterator Find(ConstReference aValue) const noexcept
    {
        return std::find(cbegin(), cend(), aValue);
    }

    [[nodiscard]] constexpr bool Contains(ConstReference aValue) const noexcept
    {
        return Find(aValue) != cend();
    }

#pragma region Iterator
    [[nodiscard]] constexpr Iterator begin() const noexcept
    {
        return beginPtr;
    }

    [[nodiscard]] constexpr ConstIterator begin() const noexcept
    {
        return beginPtr;
    }

    [[nodiscard]] constexpr ConstIterator cbegin() const noexcept
    {
        return begin();
    }

    [[nodiscard]] constexpr Iterator end() const noexcept
    {
        return endPtr;
    }

    [[nodiscard]] constexpr ConstIterator end() const noexcept
    {
        return endPtr;
    }

    [[nodiscard]] constexpr ConstIterator cend() const noexcept
    {
        return end();
    }
#pragma endregion

    [[nodiscard]] constexpr bool IsEmpty() const
    {
        return !Data();
    }

    [[nodiscard]] constexpr Pointer Data() const noexcept
    {
        return beginPtr;
    }

    [[nodiscard]] constexpr ConstPointer Data() const noexcept
    {
        return beginPtr;
    }

    [[nodiscard]] constexpr DifferenceType Size() const
    {
        return endPtr - beginPtr;
    }

    T* beginPtr; // 00
    T* endPtr;   // 08
};
RED4EXT_ASSERT_SIZE(Span<int32_t>, 0x10);
RED4EXT_ASSERT_OFFSET(Span<int32_t>, beginPtr, 0x0);
RED4EXT_ASSERT_OFFSET(Span<int32_t>, endPtr, 0x8);
} // namespace RED4ext
