#pragma once

#include <algorithm>
#include <cstdint>
#include <functional>
#include <type_traits>

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Relocation.hpp>

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

    const T& operator[](uint32_t aIndex) const
    {
        return entries[aIndex];
    }

    T& operator[](uint32_t aIndex)
    {
        return entries[aIndex];
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
        uint32_t posIdx = static_cast<uint32_t>(aPosition - begin());
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
        // Alignment seems to always be 8.
        constexpr uint32_t alignment = 8;

        auto capacity = CalculateGrowth(aCount);
        using func_t = void (*)(DynArray * aThis, uint32_t aCapacity, uint32_t aElementSize, uint32_t aAlignment,
                                void (*a5)(int64_t, int64_t, int64_t, int64_t));

        RelocFunc<func_t> func(Addresses::DynArray_Realloc);
        func(this, capacity, sizeof(T), alignment, nullptr);
    }

    Memory::IAllocator* GetAllocator()
    {
        if (capacity == 0)
            return reinterpret_cast<Memory::IAllocator*>(&entries);
        else
            return reinterpret_cast<Memory::IAllocator*>(&entries[capacity]);
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
        if (geometric < aNewSize)
        {
            return aNewSize;
        }

        return geometric;
    }
};
RED4EXT_ASSERT_SIZE(DynArray<void*>, 0x10);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, capacity, 0x8);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, size, 0xC);
} // namespace RED4ext
