#pragma once

#include <algorithm>
#include <array>
#include <cassert>
#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Containers/ArrayIterator.hpp>

namespace RED4ext
{
template<typename T, uint32_t MAX_LEN>
struct StaticArray
{
    using ValueType = T;
    using Reference = ValueType&;
    using ConstReference = const ValueType&;
    using Pointer = ValueType*;
    using ConstPointer = const ValueType*;

    using SizeType = std::uint32_t;
    using DifferenceType = std::ptrdiff_t;

    using Iterator = Detail::ArrayIterator<ValueType, StaticArray>;
    using ConstIterator = Detail::ArrayIterator<const ValueType, StaticArray>;
    using ReverseIterator = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

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
            throw std::out_of_range("StaticArray::At out of range");

        return Data()[aPos];
    }

    [[nodiscard]] constexpr ConstReference At(SizeType aPos) const
    {
        if (aPos >= Size())
            throw std::out_of_range("StaticArray::At out of range");

        return Data()[aPos];
    }

#pragma region STL
#pragma region Iterator
    constexpr Iterator begin() noexcept
    {
        return entries;
    }

    constexpr ConstIterator begin() const noexcept
    {
        return entries;
    }

    constexpr Iterator end() noexcept
    {
        return entries + size;
    }

    constexpr ConstIterator end() const noexcept
    {
        return entries + size;
    }
#pragma endregion
#pragma region Reverse Iterator
    [[nodiscard]] constexpr ReverseIterator rbegin() noexcept
    {
        return ReverseIterator(begin());
    }

    [[nodiscard]] constexpr ConstReverseIterator rbegin() const noexcept
    {
        return ConstReverseIterator(begin());
    }

    [[nodiscard]] constexpr ReverseIterator rend() noexcept
    {
        return ReverseIterator(end());
    }

    [[nodiscard]] constexpr ConstReverseIterator rend() const noexcept
    {
        return ConstReverseIterator(end());
    }
#pragma endregion
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

    [[nodiscard]] constexpr bool Empty() const noexcept
    {
        return Size() == 0;
    }

    constexpr Pointer Data() noexcept
    {
        return entries;
    }

    constexpr ConstPointer Data() const noexcept
    {
        return entries;
    }

    constexpr SizeType MaxSize() const noexcept
    {
        return MAX_LEN;
    }

    constexpr SizeType Size() const noexcept
    {
        return size;
    }
#pragma endregion

    T entries[MAX_LEN]; // 00
    uint32_t size;
};
static_assert(sizeof(StaticArray<std::array<uint8_t, 5>, 32>) ==
              164); // StaticArray<GpuWrapApiVertexPackingPackingElement, 32>
} // namespace RED4ext
