#pragma once

#include <algorithm>
#include <cassert>
#include <cstdint>
#include <functional>
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
        : entries(aAllocator ? *reinterpret_cast<Pointer*>(aAllocator) : nullptr)
        , size(0)
        , capacity(0)
    {
    }

    DynArray(std::initializer_list<ValueType> aItems, Memory::IAllocator* aAllocator = nullptr)
        : DynArray(aAllocator)
    {
        Reserve(aItems.size());

        for (const auto& item : aItems)
        {
            EmplaceBack(item);
        }
    }

    DynArray(const DynArray& aOther)
        : DynArray(aOther.GetAllocator())
    {
        Reserve(aOther.size);
        CopyFrom(aOther);
    }

    DynArray(DynArray&& aOther) noexcept
    {
        MoveFrom(std::move(aOther));
    }

    ~DynArray()
    {
        if (capacity)
        {
            Clear();
            auto allocator = *reinterpret_cast<Pointer*>(GetAllocator());
            reinterpret_cast<Memory::IAllocator*>(&allocator)->Free(entries);
            entries = allocator;
            capacity = 0;
        }
    }

    DynArray& operator=(const DynArray& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Clear();
            Reserve(aOther.size);
            CopyFrom(aOther);
        }

        return *this;
    }

    DynArray& operator=(DynArray&& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Clear();
            MoveFrom(std::move(aOther));
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

    [[nodiscard]] constexpr Reference At(std::make_signed_t<SizeType> aPos)
    {
        if (aPos < 0)
            aPos += Size();

        if (aPos < 0 || aPos >= Size())
            throw std::out_of_range("DynArray::At out of range");

        return Data()[static_cast<SizeType>(aPos)];
    }

    [[nodiscard]] constexpr ConstReference At(std::make_signed_t<SizeType> aPos) const
    {
        if (aPos < 0)
            aPos += Size();

        if (aPos < 0 || aPos >= Size())
            throw std::out_of_range("DynArray::At out of range");

        return Data()[static_cast<SizeType>(aPos)];
    }

    [[nodiscard]] constexpr Iterator Find(ConstReference aValue) noexcept
    {
        return Iterator(std::find(begin(), end(), aValue));
    }

    [[nodiscard]] constexpr ConstIterator Find(ConstReference aValue) const noexcept
    {
        return ConstIterator(std::find(cbegin(), cend(), aValue));
    }

    [[nodiscard]] bool Contains(ConstReference aValue) const
    {
        return Find(aValue) != cend();
    }

    void PushBack(ConstReference aItem)
    {
        EmplaceBack(std::forward<ConstReference>(aItem));
    }

    void PushBack(Reference& aItem)
    {
        EmplaceBack(std::forward<Reference&>(aItem));
    }

    template<class... TArgs>
    void EmplaceBack(TArgs&&... aArgs)
    {
        Emplace(end(), std::forward<TArgs>(aArgs)...);
    }

    template<class... TArgs>
    void Emplace(Iterator aPosition, TArgs&&... aArgs)
    {
        SizeType posIdx = capacity ? static_cast<SizeType>(aPosition - begin()) : 0;
        SizeType newSize = Size() + 1;
        if (newSize > capacity)
        {
            Reserve(newSize);
        }

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
        if (aSize > Capacity())
            Reserve(aSize);
        
        if (aSize < Size())
            std::destroy(begin() + aSize, end());
        
        size = aSize;
    }

    bool Remove(ConstReference aItem)
    {
        for (uint32_t i = 0; i != Size(); ++i)
        {
            if (aItem == entries[i])
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
        std::destroy(begin(), end());
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

#pragma region STL
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
#pragma region Iterator
    [[nodiscard]] constexpr Iterator Begin() noexcept
    {
        return entries;
    }

    [[nodiscard]] constexpr ConstIterator Begin() const noexcept
    {
        return entries;
    }

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

    [[nodiscard]] constexpr Iterator End() noexcept
    {
        return Iterator(entries + size);
    }

    [[nodiscard]] constexpr ConstIterator End() const noexcept
    {
        return ConstIterator(entries + size);
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
    [[nodiscard]] constexpr ReverseIterator RBegin() noexcept
    {
        return ReverseIterator(begin());
    }

    [[nodiscard]] constexpr ConstReverseIterator RBegin() const noexcept
    {
        return ReverseIterator(begin());
    }

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

    [[nodiscard]] constexpr ReverseIterator REnd() noexcept
    {
        return ReverseIterator(end());
    }

    [[nodiscard]] constexpr ConstReverseIterator REnd() const noexcept
    {
        return ConstReverseIterator(end());
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

    [[nodiscard]] constexpr SizeType Size() const noexcept
    {
        return size;
    }

    T* entries;        // 00
    uint32_t capacity; // 08
    uint32_t size;     // 0C

private:
    void MoveEntries(Pointer aSrc, Pointer aDst, SizeType aCount)
    {
        if (aCount == 0 || aSrc == aDst)
            return;

        if constexpr (std::is_trivially_copyable_v<T>)
        {
            std::memmove(aDst, aSrc, aCount * sizeof(ValueType));
        }
        else if (aSrc < aDst)
        {
            for (; aCount != 0; --aCount)
            {
                new (&aDst[aCount - 1]) ValueType(std::move(aSrc[aCount - 1]));
                aSrc[aCount - 1].~ValueType();
            }
        }
        else
        {
            for (uint32_t i = 0; i != aCount; ++i)
            {
                new (&aDst[i]) ValueType(std::move(aSrc[i]));
                aSrc[i].~ValueType();
            }
        }
    }

    SizeType CalculateGrowth(SizeType aNewSize)
    {
        uint32_t geometric = Capacity() + (Capacity() / 2);
        return (std::max)(aNewSize, geometric);
    }

    void CopyFrom(const DynArray& aOther)
    {
        for (uint32_t i = 0; i != aOther.size; ++i)
        {
            PushBack(aOther[i]);
        }
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

    void MoveFrom(DynArray&& aOther)
    {
        entries = aOther.Data();
        capacity = aOther.Capacity();
        size = aOther.Size();

        if (aOther.Capacity())
        {
            aOther.entries = *reinterpret_cast<Pointer*>(aOther.GetAllocator());
            aOther.capacity = 0;
            aOther.size = 0;
        }
    }
};
RED4EXT_ASSERT_SIZE(DynArray<void*>, 0x10);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, capacity, 0x8);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, size, 0xC);
} // namespace RED4ext
