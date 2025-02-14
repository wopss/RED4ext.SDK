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
    using ConstReference = const Reference;
    using Pointer = ValueType*;
    using ConstPointer = const Pointer;

    using SizeType = std::uint32_t;
    using DifferenceType = std::ptrdiff_t;

    using Iterator = Detail::ArrayIterator<ValueType, StaticArray>;
    using ConstIterator = Detail::ArrayIterator<const ValueType, StaticArray>;
    using ReverseIterator = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    StaticArray(std::initializer_list<T> aList)
    {
        if (aList.size() > MaxSize())
            throw std::invalid_argument("StaticArray: Initializer list size cannot exceed MAX_LEN");

        std::copy(aList.begin(), aList.end(), Data());
        size = aList.size();
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
            throw std::out_of_range("StaticArray::At: out of range");

        return Data()[aPos];
    }

    [[nodiscard]] constexpr ConstReference At(SizeType aPos) const
    {
        if (aPos >= Size())
            throw std::out_of_range("StaticArray::At: out of range");

        return Data()[aPos];
    }

    [[nodiscard]] constexpr Iterator Begin() noexcept
    {
        return entries;
    }

    [[nodiscard]] constexpr ConstIterator Begin() const noexcept
    {
        return entries;
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
        return entries + size;
    }

    [[nodiscard]] constexpr ConstIterator End() const noexcept
    {
        return entries + size;
    }

    [[nodiscard]] constexpr ReverseIterator REnd() noexcept
    {
        return ReverseIterator(End());
    }

    [[nodiscard]] constexpr ConstReverseIterator REnd() const noexcept
    {
        return ConstReverseIterator(End());
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

    constexpr SizeType Capacity() const noexcept
    {
        return MaxSize();
    }

    constexpr Pointer Data() noexcept
    {
        return entries;
    }

    constexpr ConstPointer Data() const noexcept
    {
        return entries;
    }

    [[nodiscard]] constexpr bool Empty() const noexcept
    {
        return Size() == 0;
    }

    constexpr SizeType MaxSize() const noexcept
    {
        return MAX_LEN;
    }

    constexpr SizeType Size() const noexcept
    {
        return size;
    }

    T entries[MAX_LEN]; // 00
    uint32_t size;

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
        return begin();
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
        return end();
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

    [[nodiscard]] constexpr ConstReverseIterator crbegin() const noexcept
    {
        return rbegin();
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
        return rend();
    }
#pragma endregion
#pragma endregion
};
static_assert(sizeof(StaticArray<std::array<uint8_t, 5>, 32>) ==
              164); // StaticArray<GpuWrapApiVertexPackingPackingElement, 32>
} // namespace RED4ext
