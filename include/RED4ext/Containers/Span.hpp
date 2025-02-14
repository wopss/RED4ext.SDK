#pragma once

#include <algorithm>
#include <cassert>
#include <cstdint>
#include <stdexcept>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Containers/ArrayIterator.hpp>

namespace RED4ext
{
template<typename T>
struct Span
{
    using ValueType = T;
    using Reference = ValueType&;
    using ConstReference = const Reference;
    using Pointer = ValueType*;
    using ConstPointer = const Pointer;

    using SizeType = std::uint32_t;
    using DifferenceType = std::ptrdiff_t;

    using Iterator = Detail::ArrayIterator<ValueType, Span>;
    using ConstIterator = Detail::ArrayIterator<const ValueType, Span>;
    using ReverseIterator = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

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

    constexpr Reference operator[](SizeType aPos)
    {
        assert(aPos < Size());
        return Data()[aPos];
    }

    constexpr ConstReference operator[](SizeType aPos) const
    {
        assert(aPos < Size());
        return Data()[aPos];
    }

    [[nodiscard]] constexpr Reference At(SizeType aPos)
    {
        if (aPos >= Size())
            throw std::out_of_range("Span::At out of range");

        return Data()[aPos];
    }

    [[nodiscard]] constexpr ConstReference At(SizeType aPos) const
    {
        if (aPos >= Size())
            throw std::out_of_range("Span::At out of range");

        return Data()[aPos];
    }

    [[nodiscard]] constexpr Iterator Find(ConstReference aValue) noexcept
    {
        return Iterator(std::find(Begin(), End(), aValue));
    }

    [[nodiscard]] constexpr ConstIterator Find(ConstReference aValue) const noexcept
    {
        return ConstIterator(Find(aValue));
    }

    [[nodiscard]] constexpr bool Contains(ConstReference aValue) const noexcept
    {
        return Find(aValue) != End();
    }

    [[nodiscard]] constexpr Reference Front()
    {
        assert(!Empty());
        return Data()[0];
    }

    [[nodiscard]] constexpr ConstReference Front() const
    {
        assert(!Empty());
        return Data()[0];
    }

    [[nodiscard]] constexpr Reference Back()
    {
        assert(!Empty());
        return Data()[Size() - 1];
    }

    [[nodiscard]] constexpr ConstReference Back() const
    {
        assert(!Empty());
        return Data()[Size() - 1];
    }

    [[nodiscard]] constexpr Iterator Begin() noexcept
    {
        return beginPtr;
    }

    [[nodiscard]] constexpr ConstIterator Begin() const noexcept
    {
        return beginPtr;
    }

    [[nodiscard]] constexpr ReverseIterator RBegin() noexcept
    {
        return ReverseIterator(Begin());
    }

    [[nodiscard]] constexpr ConstReverseIterator RBegin() const noexcept
    {
        return ConstReverseIterator(Begin());
    }

    [[nodiscard]] constexpr Iterator End() noexcept
    {
        return endPtr;
    }

    [[nodiscard]] constexpr ConstIterator End() const noexcept
    {
        return endPtr;
    }

    [[nodiscard]] constexpr ReverseIterator REnd() noexcept
    {
        return ReverseIterator(End());
    }

    [[nodiscard]] constexpr ConstReverseIterator REnd() const noexcept
    {
        return ConstReverseIterator(End());
    }

    [[nodiscard]] constexpr bool Empty() const
    {
        return Size() == 0;
    }

    [[nodiscard]] constexpr Pointer Data() noexcept
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

#pragma region STL
#pragma region Iterator
    [[nodiscard]] constexpr Iterator begin() noexcept
    {
        return Begin();
    }

    [[nodiscard]] constexpr ConstIterator begin() const noexcept
    {
        return Begin();
    }

    [[nodiscard]] constexpr ConstIterator cbegin() const noexcept
    {
        return Begin();
    }

    [[nodiscard]] constexpr Iterator end() noexcept
    {
        return End();
    }

    [[nodiscard]] constexpr ConstIterator end() const noexcept
    {
        return End();
    }

    [[nodiscard]] constexpr ConstIterator cend() const noexcept
    {
        return End();
    }
#pragma endregion
#pragma region Reverse Iterator
    [[nodiscard]] constexpr ReverseIterator rbegin() noexcept
    {
        return RBegin();
    }

    [[nodiscard]] constexpr ConstReverseIterator rbegin() const noexcept
    {
        return RBegin();
    }

    [[nodiscard]] constexpr ConstReverseIterator crbegin() const
    {
        return RBegin();
    }

    [[nodiscard]] constexpr ReverseIterator rend() noexcept
    {
        return REnd();
    }

    [[nodiscard]] constexpr ConstReverseIterator rend() const noexcept
    {
        return REnd();
    }

    [[nodiscard]] constexpr ConstReverseIterator crend() const noexcept
    {
        return REnd();
    }
#pragma endregion
#pragma endregion
};
RED4EXT_ASSERT_SIZE(Span<int32_t>, 0x10);
RED4EXT_ASSERT_OFFSET(Span<int32_t>, beginPtr, 0x0);
RED4EXT_ASSERT_OFFSET(Span<int32_t>, endPtr, 0x8);
} // namespace RED4ext
