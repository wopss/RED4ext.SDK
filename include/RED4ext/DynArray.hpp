#pragma once

#include <algorithm>
#include <cstdint>
#include <functional>
#include <type_traits>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
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
    DynArray(Memory::IAllocator* aAllocator = nullptr)
        : entries(aAllocator ? *reinterpret_cast<T**>(aAllocator) : nullptr)
        , size(0)
        , capacity(0)
    {
    }

    DynArray(std::initializer_list<T> aItems, Memory::IAllocator* aAllocator = nullptr)
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
            auto allocator = *reinterpret_cast<T**>(GetAllocator());
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

    const T& operator[](uint32_t aIndex) const
    {
        return entries[aIndex];
    }

    T& operator[](uint32_t aIndex)
    {
        return entries[aIndex];
    }

    bool Contains(const T& aItem) const
    {
        for (uint32_t i = 0; i != size; ++i)
        {
            if (aItem == entries[i])
            {
                return true;
            }
        }

        return false;
    }

    void PushBack(const T& aItem)
    {
        EmplaceBack(std::forward<const T&>(aItem));
    }

    void PushBack(T&& aItem)
    {
        EmplaceBack(std::forward<T&&>(aItem));
    }

    template<class... TArgs>
    void EmplaceBack(TArgs&&... aArgs)
    {
        Emplace(end(), std::forward<TArgs>(aArgs)...);
    }

    template<class... TArgs>
    void Emplace(T* aPosition, TArgs&&... aArgs)
    {
        uint32_t posIdx = capacity ? static_cast<uint32_t>(aPosition - begin()) : 0;
        uint32_t newSize = size + 1;
        if (newSize > capacity)
        {
            Reserve(newSize);
        }

        // If not at the end
        if (posIdx != size)
        {
            uint32_t entriesCount = size - posIdx;
            MoveEntries(&entries[posIdx], &entries[posIdx + 1], entriesCount);
        }

        new (&entries[posIdx]) T(std::forward<TArgs>(aArgs)...);
        size = newSize;
    }

    bool Remove(const T& aItem)
    {
        for (uint32_t i = 0; i != size; ++i)
        {
            if (aItem == entries[i])
            {
                return RemoveAt(i);
            }
        }

        return false;
    }

    bool RemoveAt(uint32_t aIndex)
    {
        if (aIndex >= size)
            return false;

        entries[aIndex].~T();
        if ((aIndex + 1) != size) // If not at the end
        {
            uint32_t entriesCount = size - (aIndex + 1);
            MoveEntries(&entries[aIndex + 1], &entries[aIndex], entriesCount);
        }
        --size;
        return true;
    }

    void Clear()
    {
        for (uint32_t i = 0; i != size; ++i)
        {
            entries[i].~T();
        }

        size = 0;
    }

    void Reserve(uint32_t aCount)
    {
        if (capacity >= aCount)
            return;

        auto newCapacity = CalculateGrowth(aCount);
        SetCapacity(newCapacity);
    }

    void ShrinkToSize()
    {
        if (capacity > size)
            SetCapacity(size);
    }

    Memory::IAllocator* GetAllocator() const
    {
        if (capacity == 0)
        {
            // Case 1: Allocator is stored instead of entries pointer
            // It's only 8 bytes for VFT so it fits in a pointer
            return reinterpret_cast<Memory::IAllocator*>(const_cast<T**>(&entries));
        }
        else
        {
            // Case 2: Allocator is stored at the end of entries buffer (aligned)
            auto allocatorPtr = AlignUp(reinterpret_cast<size_t>(&entries[capacity]), sizeof(void*));
            return reinterpret_cast<Memory::IAllocator*>(allocatorPtr);
        }
    }

#pragma region Iterator
    T* Begin()
    {
        return entries;
    }

    const T* Begin() const
    {
        return entries;
    }

    T* begin()
    {
        return Begin();
    }

    const T* begin() const
    {
        return Begin();
    }

    T* End()
    {
        return entries + size;
    }

    const T* End() const
    {
        return entries + size;
    }

    T* end()
    {
        return End();
    }

    const T* end() const
    {
        return End();
    }
#pragma endregion

    T& Front()
    {
        return *entries;
    }

    const T& Front() const
    {
        return *entries;
    }

    T& Back()
    {
        return *(entries + size - 1);
    }

    const T& Back() const
    {
        return *(entries + size - 1);
    }

    T* entries;        // 00
    uint32_t capacity; // 08
    uint32_t size;     // 0C

private:
    void MoveEntries(T* aSrc, T* aDst, uint32_t aCount)
    {
        if (aCount == 0 || aSrc == aDst)
            return;

        if constexpr (std::is_trivially_copyable_v<T>)
        {
            std::memmove(aDst, aSrc, aCount * sizeof(T));
        }
        else if (aSrc < aDst)
        {
            for (; aCount != 0; --aCount)
            {
                new (&aDst[aCount - 1]) T(std::move(aSrc[aCount - 1]));
                aSrc[aCount - 1].~T();
            }
        }
        else
        {
            for (uint32_t i = 0; i != aCount; ++i)
            {
                new (&aDst[i]) T(std::move(aSrc[i]));
                aSrc[i].~T();
            }
        }
    }

    uint32_t CalculateGrowth(uint32_t aNewSize)
    {
        uint32_t geometric = capacity + (capacity / 2);
        return (std::max)(aNewSize, geometric);
    }

    void CopyFrom(const DynArray& aOther)
    {
        for (uint32_t i = 0; i != aOther.size; ++i)
        {
            PushBack(aOther[i]);
        }
    }

    void SetCapacity(uint32_t aNewCapacity)
    {
        if (aNewCapacity < size)
            return;

        constexpr uint32_t alignment = alignof(T);

        using func_t = void (*)(DynArray* aThis, uint32_t aCapacity, uint32_t aElementSize, uint32_t aAlignment,
                                void (*aMoveFunc)(T* aDstBuffer, T* aSrcBuffer, int32_t aSrcSize, DynArray* aSrcArray));

        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::DynArray_Realloc);
        func(this, aNewCapacity, sizeof(T), alignment >= 8 ? alignment : 8, nullptr);
    }

    void MoveFrom(DynArray&& aOther)
    {
        entries = aOther.entries;
        capacity = aOther.capacity;
        size = aOther.size;

        if (aOther.capacity)
        {
            aOther.entries = *reinterpret_cast<T**>(aOther.GetAllocator());
            aOther.capacity = 0;
            aOther.size = 0;
        }
    }
};
RED4EXT_ASSERT_SIZE(DynArray<void*>, 0x10);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, capacity, 0x8);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, size, 0xC);
} // namespace RED4ext
