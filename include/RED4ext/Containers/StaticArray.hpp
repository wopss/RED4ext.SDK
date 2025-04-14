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

    StaticArray()
        : size(0)
    {
    }

    StaticArray(std::initializer_list<T> aList)
    {
        Assign(aList);
    }

    template<std::input_iterator InputIt>
    StaticArray(InputIt aFirst, InputIt aLast)
    {
        if (std::distance(aFirst, aLast) > MaxSize())
            throw std::invalid_argument("StaticArray::StaticArray: Iterator range cannot exceed MaxSize");

        Assign(aFirst, aLast);
    }

    ~StaticArray()
    {
        Clear();
    }

    Reference operator[](SizeType aIndex)
    {
        assert(aIndex < Size());
        return entries[aIndex];
    }

    ConstReference operator[](SizeType aIndex) const
    {
        assert(aIndex < Size());
        return entries[aIndex];
    }

    template<std::input_iterator InputIt>
    void Assign(InputIt aFirst, InputIt aLast)
    {
        if (aFirst == aLast)
        {
            Clear();
            return;
        }

        auto newSize = std::distance(aFirst, aLast);
        if (newSize > MaxSize())
            throw std::length_error("StaticArray::Assign: Iterator range cannot exceed MaxSize");

        Resize(newSize);
        std::copy(aFirst, aLast, entries);
    }

    void Assign(std::initializer_list<ValueType> aList)
    {
        if (aList.size() > MaxSize())
            throw std::invalid_argument("StaticArray: Initializer list size cannot exceed MaxSize");

        Assign(aList.begin(), aList.end());
    }

    void Assign(SizeType aSize, ConstReference aValue)
    {
        Resize(aSize);
        std::fill(Begin(), End(), aValue);
    }

    [[nodiscard]] constexpr Reference At(SizeType aIndex)
    {
        if (aIndex >= Size())
            throw std::out_of_range("StaticArray::At: Position out of range");

        return entries[aIndex];
    }

    [[nodiscard]] constexpr ConstReference At(SizeType aIndex) const
    {
        if (aIndex >= Size())
            throw std::out_of_range("StaticArray::At: Position out of range");

        return entries[aIndex];
    }

    [[nodiscard]] Iterator Find(ConstReference aValue) noexcept
    {
        return Iterator(std::find(Begin(), End(), aValue));
    }

    [[nodiscard]] ConstIterator Find(ConstReference aValue) const noexcept
    {
        return ConstIterator(std::find(Begin(), End(), aValue));
    }

    [[nodiscard]] bool Contains(ConstReference aValue) const noexcept
    {
        return Find(aValue) != End();
    }

    [[nodiscard]] bool Contains(ConstIterator aPos) const noexcept
    {
        return Begin() <= aPos && aPos <= End();
    }

    [[nodiscard]] bool Contains(ConstIterator aFirst, ConstIterator aLast) const noexcept
    {
        return Begin() <= (std::min)(aFirst, aLast) && (std::max)(aLast, aFirst) <= End();
    }

    void Resize(SizeType aNewSize)
    {
        if (aNewSize > MaxSize())
            throw std::invalid_argument("StaticArray::Resize: New size cannot exceed MaxSize");

        if (aNewSize == size)
            return;

        size = aNewSize;
    }

    void Clear()
    {
        Resize(0);
    }

    [[nodiscard]] Iterator Begin() noexcept
    {
        return Iterator(entries);
    }

    [[nodiscard]] ConstIterator Begin() const noexcept
    {
        return ConstIterator(entries);
    }

    [[nodiscard]] Iterator End() noexcept
    {
        return Iterator(entries + size);
    }

    [[nodiscard]] ConstIterator End() const noexcept
    {
        return ConstIterator(entries + size);
    }

    [[nodiscard]] ReverseIterator RBegin() noexcept
    {
        return ReverseIterator(Begin());
    }

    [[nodiscard]] ConstReverseIterator RBegin() const noexcept
    {
        return ConstReverseIterator(Begin());
    }

    [[nodiscard]] ReverseIterator REnd() noexcept
    {
        return ReverseIterator(End());
    }

    [[nodiscard]] ConstReverseIterator REnd() const noexcept
    {
        return ConstReverseIterator(End());
    }

    [[nodiscard]] Reference Front()
    {
        assert(!Empty());
        return entries[0];
    }

    [[nodiscard]] ConstReference Front() const
    {
        assert(!Empty());
        return entries[0];
    }

    [[nodiscard]] Reference Back()
    {
        assert(!Empty());
        return entries[size - 1];
    }

    [[nodiscard]] ConstReference Back() const
    {
        assert(!Empty());
        return entries[size - 1];
    }

    SizeType Capacity() const noexcept
    {
        return MaxSize();
    }

    Pointer Data() noexcept
    {
        return entries;
    }

    ConstPointer Data() const noexcept
    {
        return entries;
    }

    [[nodiscard]] bool Empty() const noexcept
    {
        return Size() == 0;
    }

    constexpr SizeType MaxSize() const noexcept
    {
        return MAX_LEN;
    }

    SizeType Size() const noexcept
    {
        return size;
    }

    T entries[MAX_LEN]; // 00
    uint32_t size;

#pragma region STL
    [[nodiscard]] Iterator begin() noexcept
    {
        return Begin();
    }

    [[nodiscard]] ConstIterator begin() const noexcept
    {
        return Begin();
    }

    [[nodiscard]] Iterator end() noexcept
    {
        return End();
    }

    [[nodiscard]] ConstIterator end() const noexcept
    {
        return End();
    }
#pragma endregion
};
static_assert(sizeof(StaticArray<std::array<uint8_t, 5>, 32>) ==
              0xA4); // StaticArray<GpuWrapApi::VertexPacking::PackingElement, 32>
} // namespace RED4ext
