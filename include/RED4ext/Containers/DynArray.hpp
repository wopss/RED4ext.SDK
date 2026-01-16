#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Detail/Containers/ArrayIterator.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Utils.hpp>

#include <algorithm>
#include <cassert>
#include <cstdint>
#include <functional>
#include <memory>
#include <ranges>
#include <type_traits>

namespace RED4ext
{
namespace Memory
{
struct IAllocator;
}
template<typename T>
struct DynArray
{
    using ValueType = T;
    using Reference = ValueType&;
    using ConstReference = const ValueType&;
    using Pointer = ValueType*;
    using ConstPointer = const ValueType*;

    using SizeType = std::uint32_t;
    using DifferenceType = std::ptrdiff_t;

    using Iterator = Detail::ArrayIterator<ValueType, DynArray>;
    using ConstIterator = Detail::ArrayIterator<const ValueType, DynArray>;
    using ReverseIterator = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    DynArray(Memory::IAllocator* aAllocator = nullptr)
        : m_entries(aAllocator ? *std::bit_cast<Pointer*>(aAllocator) : nullptr)
        , m_size(0)
        , m_capacity(0)
    {
    }

    DynArray(SizeType aSize, Memory::IAllocator* aAllocator = nullptr)
        : DynArray(aAllocator)
    {
        Resize(aSize);
    }

    DynArray(std::initializer_list<ValueType> aList, Memory::IAllocator* aAllocator = nullptr)
        : DynArray(aAllocator)
    {
        Assign(aList);
    }

    template<std::input_iterator InputIt>
    DynArray(InputIt aFirst, InputIt aLast, Memory::IAllocator* aAllocator = nullptr)
        : DynArray(aAllocator)
    {
        Assign(aFirst, aLast);
    }

    template<std::ranges::range TRange>
    DynArray(TRange&& aRange, Memory::IAllocator* aAllocator = nullptr)
        : DynArray(aAllocator)
    {
        Assign(aRange);
    }

    DynArray(const DynArray& aOther)
        : DynArray(aOther.GetAllocator())
    {
        Assign(aOther.Begin(), aOther.End());
    }

    DynArray(DynArray&& aOther) noexcept
        : m_entries(aOther.m_entries)
        , m_size(aOther.m_size)
        , m_capacity(aOther.m_capacity)
    {
        aOther.m_entries = *std::bit_cast<Pointer*>(aOther.GetAllocator());
        aOther.m_capacity = 0;
        aOther.m_size = 0;
    }

    ~DynArray() noexcept
    {
        if (m_capacity)
        {
            Clear();
            auto allocator = *std::bit_cast<Pointer*>(GetAllocator());
            std::bit_cast<Memory::IAllocator*>(&allocator)->Free(m_entries);
            m_entries = allocator;
            m_capacity = 0;
        }
    }

    DynArray& operator=(const DynArray& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Assign(aOther.Begin(), aOther.End());
        }
        return *this;
    }

    DynArray& operator=(DynArray&& aOther) noexcept
    {
        std::swap(m_entries, aOther.m_entries);
        std::swap(m_size, aOther.m_size);
        std::swap(m_capacity, aOther.m_capacity);
        return *this;
    }

    Reference operator[](SizeType aIndex) noexcept
    {
        assert(aIndex < m_size);
        return m_entries[aIndex];
    }

    ConstReference operator[](SizeType aIndex) const noexcept
    {
        assert(aIndex < m_size);
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

        const DifferenceType distance = std::distance(aFirst, aLast);
        const SizeType newSize = static_cast<SizeType>(std::abs(distance));
        if (newSize > MaxSize())
            throw std::length_error("DynArray::Assign: Iterator range cannot exceed MaxSize");

        Resize(newSize);

        if (distance > 0)
            std::copy(aFirst, aLast, m_entries);
        else
            std::reverse_copy(aLast, aFirst, m_entries);
    }

    template<std::ranges::range TRange>
    void Assign(TRange&& aRange)
    {
        Assign(std::ranges::begin(aRange), std::ranges::end(aRange));
    }

    void Assign(std::initializer_list<ValueType> aList)
    {
        Assign(aList.begin(), aList.end());
    }

    void Assign(SizeType aSize, ConstReference aValue)
    {
        Resize(aSize);
        std::fill(Begin(), End(), aValue);
    }

    [[nodiscard]] Reference At(SizeType aIndex)
    {
        if (aIndex >= m_size)
            throw std::out_of_range("DynArray::At: Position out of range");

        return m_entries[aIndex];
    }

    [[nodiscard]] ConstReference At(SizeType aIndex) const
    {
        if (aIndex >= m_size)
            throw std::out_of_range("DynArray::At: Position out of range");

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

    void PushBack(ConstReference aItem)
    {
        EmplaceBack(aItem);
    }

    void PushBack(ValueType&& aItem)
    {
        EmplaceBack(std::move(aItem));
    }

    template<class... TArgs>
    Iterator EmplaceBack(TArgs&&... aArgs)
    {
        return Emplace(End(), std::forward<TArgs>(aArgs)...);
    }

    template<class... TArgs>
    Iterator Emplace(ConstIterator aPos, TArgs&&... aArgs)
    {
        assert(Includes(aPos));

        const SizeType posIdx = static_cast<SizeType>(std::distance(ConstIterator(Begin()), aPos));
        const SizeType newSize = m_size + 1;
        Reserve(newSize);

        const SizeType tailSize = m_size - posIdx;
        if (tailSize > 0)
            ShiftEntries(Iterator(&m_entries[posIdx]), Iterator(&m_entries[posIdx + 1]), tailSize);

        new (&m_entries[posIdx]) ValueType(std::forward<TArgs>(aArgs)...);

        m_size = newSize;
        return Begin() + posIdx;
    }

    Iterator Insert(ConstIterator aPos, ConstReference aValue)
    {
        return Emplace(aPos, aValue);
    }

    template<std::input_iterator InputIt>
    Iterator Insert(ConstIterator aPos, InputIt aFirst, InputIt aLast)
    {
        assert(Includes(aPos));

        const DifferenceType distance = std::distance(aFirst, aLast);
        const SizeType insertSize = static_cast<SizeType>(std::abs(distance));
        const SizeType insertIdx = static_cast<SizeType>(std::distance(ConstIterator(Begin()), aPos));

        const SizeType newSize = m_size + insertSize;
        Reserve(newSize);

        Iterator insertPos = Begin() + insertIdx;

        SizeType tailSize = m_size - insertIdx;
        if (tailSize > 0)
            ShiftEntries(insertPos, insertPos + insertSize, tailSize);

        if (distance > 0)
            std::copy(aFirst, aLast, insertPos);
        else
            std::reverse_copy(aFirst, aLast, insertPos);

        m_size = newSize;
        return insertPos;
    }

    template<std::ranges::range TRange>
    Iterator Insert(ConstIterator aPos, TRange&& aRange)
    {
        return Insert(aPos, std::ranges::begin(aRange), std::ranges::end(aRange));
    }

    Iterator Insert(ConstIterator aPos, std::initializer_list<ValueType> aList)
    {
        return Insert(aPos, aList.begin(), aList.end());
    }

    Iterator Insert(ConstIterator aPos, SizeType aCount, ConstReference aValue)
    {
        assert(Includes(aPos));

        const SizeType insertIdx = static_cast<SizeType>(std::distance(ConstIterator(Begin()), aPos));

        const SizeType newSize = m_size + aCount;
        Reserve(newSize);

        Iterator first = Begin() + insertIdx;
        Iterator last = first + aCount;

        const SizeType tailSize = m_size - insertIdx;
        if (tailSize > 0)
            ShiftEntries(first, last, tailSize);

        std::fill(first, last, aValue);

        m_size = newSize;
        return first;
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
            Reserve(aNewSize);
            std::uninitialized_default_construct(End(), Begin() + aNewSize);
        }

        m_size = aNewSize;
    }

    Iterator Erase(Iterator aPos)
    {
        assert(aPos < End() && Includes(aPos));

        std::destroy_at(std::addressof(*aPos));

        const SizeType tailSize = static_cast<SizeType>(std::distance(aPos, End()));
        if (tailSize > 0)
            ShiftEntries(aPos + 1, aPos, tailSize);

        --m_size;
        return tailSize == 0 ? End() : aPos;
    }

    Iterator Erase(ConstIterator aFirst, ConstIterator aLast)
    {
        if (aFirst == aLast)
            return aFirst;

        ConstIterator first = (std::min)(aFirst, aLast);
        ConstIterator last = (std::max)(aFirst, aLast);

        assert(last < End() && Includes(first, last));

        std::destroy(first, last);

        const SizeType tailSize = static_cast<SizeType>(std::distance(last, End()));
        if (tailSize > 0)
            ShiftEntries(last, first, tailSize);

        m_size -= static_cast<SizeType>(std::distance(first, last));

        return tailSize == 0 ? End() : first;
    }

    bool Remove(ConstReference aItem)
    {
        auto it = Find(aItem);
        if (it == End())
            return false;

        Erase(it);
        return true;
    }

    bool RemoveAt(SizeType aIndex)
    {
        if (aIndex >= m_size)
            return false;

        Erase(Begin() + aIndex);
        return true;
    }

    void Clear() noexcept
    {
        std::destroy(Begin(), End());
        m_size = 0;
    }

    void Reserve(SizeType aCapacity)
    {
        if (aCapacity > MaxSize())
            throw std::invalid_argument("DynArray::Reserve: Capacity cannot exceed MaxSize");

        if (m_capacity >= aCapacity)
            return;

        const auto newCapacity = CalculateGrowth(aCapacity);
        SetCapacity(newCapacity);
    }

    void ShrinkToFit()
    {
        if (m_capacity > m_size)
            SetCapacity(m_size);
    }

    [[nodiscard]] Memory::IAllocator* GetAllocator() const
    {
        if (m_capacity == 0)
        {
            // Case 1: Allocator is stored instead of entries pointer
            return reinterpret_cast<Memory::IAllocator*>(const_cast<Pointer*>(&m_entries));
        }
        else
        {
            // Case 2: Allocator is stored at the end of entries buffer (aligned)
            auto allocatorPtr = AlignUp(reinterpret_cast<size_t>(&m_entries[m_capacity]), sizeof(void*));
            return reinterpret_cast<Memory::IAllocator*>(allocatorPtr);
        }
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

    [[nodiscard]] bool Empty() const noexcept
    {
        return m_size == 0;
    }

    [[nodiscard]] Pointer Data() noexcept
    {
        return m_entries;
    }

    [[nodiscard]] ConstPointer Data() const noexcept
    {
        return m_entries;
    }

    [[nodiscard]] SizeType Capacity() const noexcept
    {
        return m_capacity;
    }

    [[nodiscard]] constexpr SizeType MaxSize() const noexcept
    {
        static constexpr auto maxSize =
            (std::min)((std::numeric_limits<SizeType>::max)(),
                       static_cast<SizeType>((std::numeric_limits<uint32_t>::max)() / sizeof(ValueType)));
        return maxSize;
    }

    [[nodiscard]] SizeType Size() const noexcept
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
    T* m_entries;        // 00
    uint32_t m_capacity; // 08
    uint32_t m_size;     // 0C

    [[nodiscard]] bool Includes(ConstIterator aPos) const noexcept
    {
        return Begin() <= aPos && aPos <= End();
    }

    [[nodiscard]] bool Includes(ConstIterator aFirst, ConstIterator aLast) const noexcept
    {
        return Begin() <= (std::min)(aFirst, aLast) && (std::max)(aLast, aFirst) <= End();
    }

    template<class InputIt>
    requires std::same_as<InputIt, Iterator> || std::same_as<InputIt, ConstIterator>
    void ShiftEntries(InputIt aSrc, InputIt aDst, SizeType aCount) noexcept
    {
        if (aCount == 0 || aSrc == aDst)
            return;

        if (aSrc >= aDst)
            std::move(aSrc, aSrc + aCount, aDst);
        else
            std::move_backward(aSrc, aSrc + aCount, aDst + aCount);
    }

    static void MoveEntries(Pointer aDstBuffer, Pointer aSrcBuffer, uint32_t aSrcSizeInBytes, DynArray* aSrcArray)
    {
        if (aSrcSizeInBytes == 0)
            return;

        std::move(aSrcBuffer, aSrcBuffer + aSrcArray->Size(), aDstBuffer);
        std::destroy(aSrcBuffer, aSrcBuffer + aSrcArray->Size());
    }

    SizeType CalculateGrowth(SizeType aNewSize)
    {
        uint32_t geometric = m_capacity + (m_capacity / 2);
        return (std::max)(aNewSize, geometric);
    }

    void SetCapacity(SizeType aNewCapacity)
    {
        if (aNewCapacity < m_size)
            return;

        constexpr uint32_t alignment = alignof(ValueType);

        using func_t = void (*)(
            DynArray* aThis, uint32_t aCapacity, uint32_t aElementSize, uint32_t aAlignment,
            void (*aMoveFunc)(Pointer aDstBuffer, Pointer aSrcBuffer, uint32_t aSrcSizeInBytes, DynArray* aSrcArray));
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::DynArray_Realloc);

        constexpr bool isTrivialRealloc =
            std::is_trivially_move_constructible_v<ValueType> && std::is_trivially_destructible_v<ValueType>;

        func(this, aNewCapacity, sizeof(ValueType), alignment >= 8 ? alignment : 8,
             isTrivialRealloc ? nullptr : DynArray::MoveEntries);
    }
};
RED4EXT_ASSERT_SIZE(DynArray<void*>, 0x10);
} // namespace RED4ext
