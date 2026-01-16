#pragma once

#include <algorithm>
#include <array>
#include <cassert>
#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Containers/ArrayIterator.hpp>

namespace RED4ext
{
template<typename T, uint32_t N>
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
        : m_size(0)
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
        return m_entries[aIndex];
    }

    ConstReference operator[](SizeType aIndex) const
    {
        assert(aIndex < Size());
        return m_entries[aIndex];
    }

    template<std::input_iterator InputIt>
    void Assign(InputIt aFirst, InputIt aLast)
    {
        if (aFirst == aLast)
        {
            Clear();
            return;
        }

        const SizeType newSize = static_cast<SizeType>(std::distance(aFirst, aLast));
        if (newSize > MaxSize())
            throw std::length_error("StaticArray::Assign: Iterator range cannot exceed MaxSize");

        Resize(newSize);
        std::copy(aFirst, aLast, m_entries);
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

        return m_entries[aIndex];
    }

    [[nodiscard]] constexpr ConstReference At(SizeType aIndex) const
    {
        if (aIndex >= Size())
            throw std::out_of_range("StaticArray::At: Position out of range");

        return m_entries[aIndex];
    }

    [[nodiscard]] Iterator Find(ConstReference aValue)
    {
        return Iterator(std::find(Begin(), End(), aValue));
    }

    [[nodiscard]] ConstIterator Find(ConstReference aValue) const
    {
        return ConstIterator(std::find(Begin(), End(), aValue));
    }

    [[nodiscard]] bool IsInRange(ConstReference aValue) const
    {
        return Find(aValue) != End();
    }

    void Resize(SizeType aNewSize)
    {
        if (aNewSize == m_size)
            return;

        if (aNewSize < m_size)
        {
            std::destroy(Begin() + aNewSize, End());
        }
        else
        {
            if (aNewSize > MaxSize())
                throw std::invalid_argument("StaticArray::Resize: New size cannot exceed MaxSize");

            std::uninitialized_default_construct(End(), Begin() + aNewSize);
        }

        m_size = aNewSize;
    }

    void Clear()
    {
        Resize(0);
    }

    [[nodiscard]] Iterator Begin() noexcept
    {
        return Iterator(m_entries);
    }

    [[nodiscard]] ConstIterator Begin() const noexcept
    {
        return ConstIterator(m_entries);
    }

    [[nodiscard]] Iterator End() noexcept
    {
        return Iterator(m_entries + m_size);
    }

    [[nodiscard]] ConstIterator End() const noexcept
    {
        return ConstIterator(m_entries + m_size);
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
        return m_entries[0];
    }

    [[nodiscard]] ConstReference Front() const
    {
        assert(!Empty());
        return m_entries[0];
    }

    [[nodiscard]] Reference Back()
    {
        assert(!Empty());
        return m_entries[m_size - 1];
    }

    [[nodiscard]] ConstReference Back() const
    {
        assert(!Empty());
        return m_entries[m_size - 1];
    }

    SizeType Capacity() const noexcept
    {
        return MaxSize();
    }

    Pointer Data() noexcept
    {
        return m_entries;
    }

    ConstPointer Data() const noexcept
    {
        return m_entries;
    }

    [[nodiscard]] bool Empty() const noexcept
    {
        return m_size == 0;
    }

    constexpr SizeType MaxSize() const noexcept
    {
        return N;
    }

    SizeType Size() const noexcept
    {
        return m_size;
    }

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

    [[nodiscard]] iterator begin() noexcept
    {
        return Begin();
    }

    [[nodiscard]] const_iterator begin() const noexcept
    {
        return Begin();
    }

    [[nodiscard]] iterator end() noexcept
    {
        return End();
    }

    [[nodiscard]] const_iterator end() const noexcept
    {
        return End();
    }
#pragma endregion

private:
    T m_entries[N]; // 00
    uint32_t m_size;

    [[nodiscard]] bool IsInRange(ConstIterator aPos) const noexcept
    {
        return Begin() <= aPos && aPos <= End();
    }

    [[nodiscard]] bool IsInRange(ConstIterator aFirst, ConstIterator aLast) const noexcept
    {
        return Begin() <= (std::min)(aFirst, aLast) && (std::max)(aLast, aFirst) <= End();
    }
};
static_assert(sizeof(StaticArray<std::array<uint8_t, 5>, 32>) ==
              0xA4); // StaticArray<GpuWrapApi::VertexPacking::PackingElement, 32>
} // namespace RED4ext
