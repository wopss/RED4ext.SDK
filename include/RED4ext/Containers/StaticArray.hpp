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
            throw std::invalid_argument("StaticArray: Initializer list size cannot exceed MaxSize");

        std::copy(aList.begin(), aList.end(), Data());
        size = aList.size();
    }

    ~StaticArray()
    {
        Clear();
    }

    constexpr Reference operator[](SizeType aIndex)
    {
        assert(aIndex < Size());
        return entries[aIndex];
    }

    constexpr ConstReference operator[](SizeType aIndex) const
    {
        assert(aIndex < Size());
        return entries[aIndex];
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

        if (aNewSize < size)
        {
            std::destroy(Begin() + aNewSize, End());
        }
        else
        {
            std::uninitialized_default_construct(End(), Begin() + aNewSize);
        }

        size = aNewSize;
    }

    void Clear()
    {
        std::destroy(Begin(), End());
        size = 0;
    }

    [[nodiscard]] constexpr Iterator Begin() noexcept
    {
        return Iterator(entries);
    }

    [[nodiscard]] constexpr ConstIterator Begin() const noexcept
    {
        return ConstIterator(entries);
    }

    [[nodiscard]] constexpr Iterator End() noexcept
    {
        return Iterator(entries + size);
    }

    [[nodiscard]] constexpr ConstIterator End() const noexcept
    {
        return Iterator(entries + size);
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

    [[nodiscard]] constexpr Reference Front()
    {
        assert(!Empty());
        return entries[0];
    }

    [[nodiscard]] constexpr ConstReference Front() const
    {
        assert(!Empty());
        return entries[0];
    }

    [[nodiscard]] constexpr Reference Back()
    {
        assert(!Empty());
        return entries[size - 1];
    }

    [[nodiscard]] constexpr ConstReference Back() const
    {
        assert(!Empty());
        return entries[size - 1];
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

    [[nodiscard]] constexpr Iterator end() noexcept
    {
        return End();
    }

    [[nodiscard]] constexpr ConstIterator end() const noexcept
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

    [[nodiscard]] constexpr ReverseIterator rend() noexcept
    {
        return REnd();
    }

    [[nodiscard]] constexpr ConstReverseIterator rend() const noexcept
    {
        return REnd();
    }
#pragma endregion
#pragma endregion
};
static_assert(sizeof(StaticArray<std::array<uint8_t, 5>, 32>) ==
              0xA4); // StaticArray<GpuWrapApi::VertexPacking::PackingElement, 32>
} // namespace RED4ext
