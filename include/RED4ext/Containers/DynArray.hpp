#pragma once

#include <algorithm>
#include <cassert>
#include <cstdint>
#include <functional>
#include <memory>
#include <type_traits>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Detail/Containers/ArrayIterator.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Utils.hpp>

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
    using ConstReference = const Reference;
    using Pointer = ValueType*;
    using ConstPointer = const Pointer;

    using SizeType = std::uint32_t;
    using DifferenceType = std::ptrdiff_t;

    using Iterator = Detail::ArrayIterator<ValueType, DynArray>;
    using ConstIterator = Detail::ArrayIterator<const ValueType, DynArray>;
    using ReverseIterator = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    DynArray(Memory::IAllocator* aAllocator = nullptr)
        : entries(aAllocator ? std::bit_cast<Pointer>(aAllocator) : nullptr)
        , size(0)
        , capacity(0)
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

    DynArray(const DynArray& aOther)
        : DynArray(aOther.GetAllocator())
    {
        Assign(aOther.Begin(), aOther.End());
    }

    DynArray(DynArray&& aOther) noexcept
        : entries(aOther.Data())
        , size(aOther.Size())
        , capacity(aOther.Capacity())
    {
        aOther.entries = std::bit_cast<Pointer>(aOther.GetAllocator());
        aOther.capacity = 0;
        aOther.size = 0;
    }

    template<std::input_iterator InputIt>
    DynArray(InputIt aFirst, InputIt aLast, Memory::IAllocator* aAllocator = nullptr)
        : DynArray(aAllocator)
    {
        Assign(aFirst, aLast);
    }

    ~DynArray()
    {
        Clear();
        auto allocator = std::bit_cast<Pointer>(GetAllocator());
        std::bit_cast<Memory::IAllocator*>(&allocator)->Free(entries);
        entries = allocator;
        capacity = 0;
    }

    DynArray& operator=(const DynArray& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Assign(aOther.Begin(), aOther.End());
        }
        return *this;
    }

    DynArray& operator=(DynArray&& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Clear();
            entries = aOther.Data();
            size = aOther.Size();
            capacity = aOther.Capacity();

            aOther.entries = std::bit_cast<Pointer>(aOther.GetAllocator());
            aOther.capacity = 0;
            aOther.size = 0;
        }

        return *this;
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

    template<std::input_iterator InputIt>
    constexpr void Assign(InputIt aFirst, InputIt aLast)
    {
        if (aFirst == aLast)
        {
            Clear();
            return;
        }

        DifferenceType diff = std::abs(std::distance(aFirst, aLast));
        if (diff > MaxSize())
            throw std::length_error("DynArray::Assign: Iterator range exceeds max size");

        Resize(static_cast<SizeType>(diff));

        if constexpr (std::is_move_constructible_v<ValueType>)
        {
            std::move(aFirst, aLast, Data());
        }
        else
        {
            std::copy(aFirst, aLast, Data());
        }
    }

    constexpr void Assign(std::initializer_list<ValueType> aList)
    {
        Assign(aList.begin(), aList.end());
    }

    constexpr void Assign(SizeType aAmount, ValueType aValue)
    {
        Resize(aAmount);
        for (SizeType i = 0; i < aAmount; ++i)
        {
            Data()[i] = aValue;
        }
    }

    [[nodiscard]] constexpr Reference At(SizeType aPos)
    {
        if (aPos >= Size())
            throw std::out_of_range("DynArray::At: Out of range");

        return Data()[aPos];
    }

    [[nodiscard]] constexpr ConstReference At(SizeType aPos) const
    {
        if (aPos >= Size())
            throw std::out_of_range("DynArray::At: Out of range");

        return Data()[aPos];
    }

    [[nodiscard]] constexpr Iterator Find(ConstReference aValue) noexcept
    {
        return Iterator(std::find(Begin(), End(), aValue));
    }

    [[nodiscard]] constexpr ConstIterator Find(ConstReference aValue) const noexcept
    {
        return ConstIterator(std::find(Begin(), End(), aValue));
    }

    [[nodiscard]] bool Contains(ConstReference aValue) const
    {
        return Find(aValue) != End();
    }

    void PushBack(ConstReference aItem)
    {
        EmplaceBack(std::forward<ConstReference>(aItem));
    }

    void PushBack(ValueType&& aItem)
    {
        EmplaceBack(std::forward<ValueType&&>(aItem));
    }

    template<class... TArgs>
    void EmplaceBack(TArgs&&... aArgs)
    {
        Emplace(End(), std::forward<TArgs>(aArgs)...);
    }

    template<class... TArgs>
    void Emplace(Iterator aPosition, TArgs&&... aArgs)
    {
        SizeType posIdx = Capacity() ? static_cast<SizeType>(aPosition - Begin()) : 0;
        SizeType newSize = Size() + 1;
        if (newSize > Capacity())
            Reserve(newSize);

        // If not at the end
        if (posIdx != Size())
        {
            SizeType entriesCount = Size() - posIdx;
            MoveEntries(&entries[posIdx], &entries[posIdx + 1], entriesCount);
        }

        new (&entries[posIdx]) ValueType(std::forward<TArgs>(aArgs)...);
        size = newSize;
    }

    void Resize(SizeType aSize)
    {
        if (aSize == Size())
            return;

        if (aSize < Size())
        {
            std::destroy(Begin() + aSize, End());
        }
        else
        {
            Reserve(aSize);
            std::uninitialized_default_construct(End(), Begin() + aSize);
        }

        size = aSize;
    }

    bool Remove(ConstReference aItem)
    {
        for (uint32_t i = 0; i != Size(); ++i)
        {
            if (aItem == Data()[i])
            {
                return RemoveAt(i);
            }
        }

        return false;
    }

    bool RemoveAt(SizeType aPos)
    {
        if (aPos >= Size())
            return false;

        entries[aPos].~ValueType();
        if ((aPos + 1) != Size()) // If not at the end
        {
            SizeType entriesCount = Size() - (aPos + 1);
            MoveEntries(&entries[aPos + 1], &entries[aPos], entriesCount);
        }
        --size;
        return true;
    }

    void Clear() noexcept
    {
        std::destroy(Begin(), End());
        size = 0;
    }

    void Reserve(SizeType aCount)
    {
        if (Capacity() >= aCount)
            return;

        auto newCapacity = CalculateGrowth(aCount);
        SetCapacity(newCapacity);
    }

    void ShrinkToFit()
    {
        if (Capacity() > Size())
            SetCapacity(Size());
    }

    [[nodiscard]] Memory::IAllocator* GetAllocator() const
    {
        if (Capacity() == 0)
        {
            // Case 1: Allocator is stored instead of entries pointer
            // It's only 8 bytes for VFT so it fits in a pointer
            return reinterpret_cast<Memory::IAllocator*>(const_cast<Pointer*>(&entries));
        }
        else
        {
            // Case 2: Allocator is stored at the end of entries buffer (aligned)
            auto allocatorPtr = AlignUp(reinterpret_cast<size_t>(&entries[Capacity()]), sizeof(void*));
            return reinterpret_cast<Memory::IAllocator*>(allocatorPtr);
        }
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
        return Iterator(entries + size);
    }

    [[nodiscard]] constexpr ConstIterator End() const noexcept
    {
        return ConstIterator(entries + size);
    }

    [[nodiscard]] constexpr ReverseIterator REnd() noexcept
    {
        return ReverseIterator(End());
    }

    [[nodiscard]] constexpr ConstReverseIterator REnd() const noexcept
    {
        return ConstReverseIterator(End());
    }

    [[nodiscard]] constexpr bool Empty() const noexcept
    {
        return Size() == 0;
    }

    [[nodiscard]] constexpr Pointer Data() noexcept
    {
        return entries;
    }

    [[nodiscard]] constexpr ConstPointer Data() const noexcept
    {
        return entries;
    }

    [[nodiscard]] constexpr SizeType Capacity() const noexcept
    {
        return capacity;
    }

    [[nodiscard]] constexpr SizeType MaxSize() const noexcept
    {
#undef max // preprocessor thinks max is a macro under NOMINMAX
        return std::numeric_limits<SizeType>::max();
    }

    [[nodiscard]] constexpr SizeType Size() const noexcept
    {
        return size;
    }

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

    [[nodiscard]] constexpr ConstReverseIterator crbegin() const
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
private:
    T* entries;        // 00
    uint32_t capacity; // 08
    uint32_t size;     // 0C

    void MoveEntries(Pointer aSrc, Pointer aDst, SizeType aCount)
    {
        if (aCount == 0 || aSrc == aDst)
            return;

        if (aSrc < aDst)
        {
            std::move_backward(aSrc, aSrc + aCount, aDst + aCount);
        }
        else
        {
            std::move(aSrc, aSrc + aCount, aDst);
        }
    }

    SizeType CalculateGrowth(SizeType aNewSize)
    {
        uint32_t geometric = Capacity() + (Capacity() / 2);
        return (std::max)(aNewSize, geometric);
    }

    void SetCapacity(SizeType aNewCapacity)
    {
        if (aNewCapacity < size)
            return;

        constexpr uint32_t alignment = alignof(ValueType);

        using func_t =
            void (*)(DynArray* aThis, uint32_t aCapacity, uint32_t aElementSize, uint32_t aAlignment,
                     void (*aMoveFunc)(Pointer aDstBuffer, Pointer aSrcBuffer, int32_t aSrcSize, DynArray* aSrcArray));

        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::DynArray_Realloc);
        func(this, aNewCapacity, sizeof(ValueType), alignment >= 8 ? alignment : 8, nullptr);
    }
};
RED4EXT_ASSERT_SIZE(DynArray<void*>, 0x10);
} // namespace RED4ext
