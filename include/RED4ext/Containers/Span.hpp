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

    using DifferenceType = std::ptrdiff_t;
    using SizeType = DifferenceType;

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

    constexpr Reference operator[](SizeType aIndex)
    {
        assert(aIndex < Size());
        return Data()[aIndex];
    }

    constexpr ConstReference operator[](SizeType aIndex) const
    {
        assert(aIndex < Size());
        return Data()[aIndex];
    }

    [[nodiscard]] constexpr Reference At(SizeType aIndex)
    {
        if (aIndex >= Size())
            throw std::out_of_range("Span::At: Position out of range");

        return Data()[aIndex];
    }

    [[nodiscard]] constexpr ConstReference At(SizeType aIndex) const
    {
        if (aIndex >= Size())
            throw std::out_of_range("Span::At: Position out of range");

        return Data()[aIndex];
    }

    [[nodiscard]] constexpr Iterator Find(ConstReference aValue)
    {
        return Iterator(std::find(Begin(), End(), aValue));
    }

    [[nodiscard]] ConstIterator Find(ConstReference aValue) const
    {
        return ConstIterator(std::find(Begin(), End(), aValue));
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
        return Iterator(beginPtr);
    }

    [[nodiscard]] constexpr ConstIterator Begin() const noexcept
    {
        return ConstIterator(beginPtr);
    }

    [[nodiscard]] constexpr Iterator End() noexcept
    {
        return Iterator(endPtr);
    }

    [[nodiscard]] constexpr ConstIterator End() const noexcept
    {
        return ConstIterator(endPtr);
    }

    [[nodiscard]] constexpr ReverseIterator RBegin() noexcept
    {
        return ReverseIterator(Begin());
    }

    [[nodiscard]] constexpr ConstReverseIterator RBegin() const noexcept
    {
        return ConstReverseIterator(Begin());
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

    [[nodiscard]] constexpr SizeType Size() const
    {
        return End() - Begin();
    }

    T* beginPtr; // 00
    T* endPtr;   // 08

#pragma region STL
    using value_type = ValueType;
    using reference = Reference;
    using const_reference = ConstReference;
    using pointer = Pointer;
    using const_pointer = ConstPointer;

    using size_type = SizeType;
    using difference_type = DifferenceType;

    using iterator = Iterator;
    using const_iterator = ConstIterator;
    using reverse_iterator = ReverseIterator;
    using const_reverse_iterator = ConstReverseIterator;

    [[nodiscard]] size_type size() const noexcept
    {
        return Size();
    }

    [[nodiscard]] constexpr iterator begin() noexcept
    {
        return Begin();
    }

    [[nodiscard]] constexpr const_iterator begin() const noexcept
    {
        return Begin();
    }

    [[nodiscard]] constexpr iterator end() noexcept
    {
        return End();
    }

    [[nodiscard]] constexpr const_iterator end() const noexcept
    {
        return End();
    }
#pragma endregion
};
RED4EXT_ASSERT_SIZE(Span<int32_t>, 0x10);
RED4EXT_ASSERT_OFFSET(Span<int32_t>, beginPtr, 0x0);
RED4EXT_ASSERT_OFFSET(Span<int32_t>, endPtr, 0x8);
} // namespace RED4ext
