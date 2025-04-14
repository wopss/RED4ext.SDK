#pragma once

#include <algorithm>
#include <cstdint>
#include <functional>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

namespace RED4ext
{
namespace Memory
{
struct IAllocator;
}

template<typename T, class Compare = std::less<T>, bool Unique = false>
struct SortedArray
{
    enum class Flags : int32_t
    {
        NotSorted = 1 << 0
    };

    SortedArray(Memory::IAllocator* aAllocator = nullptr)
        : entries(aAllocator ? *reinterpret_cast<T**>(aAllocator) : nullptr)
        , size(0)
        , capacity(0)
        , flags(0)
    {
    }

    SortedArray(const SortedArray& aOther)
        : SortedArray(aOther.GetAllocator())
    {
        CopyFrom(aOther);
    }

    SortedArray(SortedArray&& aOther) noexcept
    {
        MoveFrom(std::move(aOther));
    }

    ~SortedArray()
    {
        if (capacity)
        {
            Clear();
            GetAllocator()->Free(entries);
            capacity = 0;
        }
    }

    SortedArray& operator=(const SortedArray& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Clear();
            CopyFrom(aOther);
        }

        return *this;
    }

    SortedArray& operator=(SortedArray&& aOther)
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

    std::pair<T*, bool> Insert(const T& aItem)
    {
        return Emplace(std::forward<const T&>(aItem));
    }

    std::pair<T*, bool> Insert(T&& aItem)
    {
        return Emplace(std::forward<T&&>(aItem));
    }

    uint32_t Insert(const SortedArray& aOther)
    {
        return Merge(false, aOther);
    }

    std::pair<T*, bool> InsertOrAssign(const T& aItem)
    {
        return Emplace_INTERNAL(true, std::forward<const T&>(aItem));
    }

    std::pair<T*, bool> InsertOrAssign(T&& aItem)
    {
        return Emplace_INTERNAL(true, std::forward<T&&>(aItem));
    }

    uint32_t InsertOrAssign(const SortedArray& aOther)
    {
        return Merge(true, aOther);
    }

    T* Find(const T& aItem)
    {
        const auto it = LowerBound(aItem);
        return it == end() || *it != aItem ? end() : it;
    }

    template<class... TArgs>
    std::pair<T*, bool> Emplace(TArgs&&... aArgs)
    {
        return Emplace_INTERNAL(false, std::forward<TArgs>(aArgs)...);
    }

    bool Remove(const T& aItem)
    {
        const auto it = Find(aItem);
        if (it == end())
            return false;

        return RemoveAt(static_cast<uint32_t>(it - Begin()));
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

    void Sort()
    {
        std::sort(&entries[0], &entries[size], Compare{});

        flags &= ~(int32_t)Flags::NotSorted;
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

        uint32_t newCapacity = CalculateGrowth(aCount);
        using func_t = void (*)(SortedArray* aThis, uint32_t aCapacity, uint32_t aElementSize, uint32_t aAlignment,
                                void (*a5)(int64_t, int64_t, int64_t, int64_t));

        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::DynArray_Realloc);
        func(this, newCapacity, sizeof(T), alignment, nullptr);
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
    int32_t flags;     // 10

private:
    template<class... TArgs>
    std::pair<T*, bool> Emplace_INTERNAL(bool insertOrAssign, TArgs&&... aArgs)
    {
        uint32_t newSize = size + 1;
        if (newSize > capacity)
        {
            Reserve(newSize);
        }

        T tmp(std::forward<TArgs>(aArgs)...);
        T* it = LowerBound(tmp);
        if (it != end())
        {
            if (Unique && *it == tmp)
            {
                if (insertOrAssign)
                {
                    *it = std::move(tmp);
                }

                return {it, false};
            }

            uint32_t entriesCount = static_cast<uint32_t>(end() - it);
            MoveEntries(it, it + 1, entriesCount);
        }

        *it = std::move(tmp);
        size = newSize;
        return {it, true};
    }

    uint32_t Merge(bool insertOrAssign, const SortedArray& aOther)
    {
        std::vector<std::pair<size_t, const T&>> insertions;
        insertions.reserve(aOther.size);

        for (const auto& item : aOther)
        {
            auto it = LowerBound(item);

            if (Unique && it != end() && *it == item)
            {
                if (insertOrAssign)
                {
                    *it = item;
                }
                continue;
            }

            insertions.emplace_back(it - begin(), item);
        }

        int32_t diff = static_cast<int32_t>(insertions.size());
        if (diff == 0)
        {
            return 0;
        }

        uint32_t newSize = size + diff;
        if (newSize > capacity)
        {
            Reserve(newSize);
        }

        auto upperBound = end();
        while (--diff >= 0)
        {
            auto lowerBound = begin() + insertions[diff].first;
            auto finalPostition = lowerBound + diff;

            auto movableSpan = static_cast<uint32_t>(upperBound - lowerBound);
            if (movableSpan > 0)
            {
                MoveEntries(lowerBound, finalPostition + 1, movableSpan);
            }

            *finalPostition = insertions[diff].second;
            upperBound = lowerBound;
        }

        size = newSize;

        return static_cast<uint32_t>(insertions.size());
    }

    T* LowerBound(const T& aItem)
    {
        if ((flags & (int32_t)Flags::NotSorted) == (int32_t)Flags::NotSorted)
        {
            Sort();
        }

        return std::lower_bound(begin(), end(), aItem, Compare{});
    }

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
        auto geometric = capacity + (capacity / 2);
        if (geometric < aNewSize)
        {
            return aNewSize;
        }

        return geometric;
    }

    void CopyFrom(const SortedArray& aOther)
    {
        for (uint32_t i = 0; i != aOther.size; ++i)
        {
            PushBack(aOther[i]);
        }
    }

    void MoveFrom(SortedArray&& aOther)
    {
        entries = aOther.entries;
        capacity = aOther.capacity;
        size = aOther.size;
        flags = aOther.flags;

        if (aOther.capacity)
        {
            aOther.entries = *reinterpret_cast<T**>(aOther.GetAllocator());
            aOther.capacity = 0;
            aOther.size = 0;
            aOther.flags = 0;
        }
    }
};
RED4EXT_ASSERT_SIZE(SortedArray<void*>, 0x18);
RED4EXT_ASSERT_OFFSET(SortedArray<void*>, capacity, 0x8);
RED4EXT_ASSERT_OFFSET(SortedArray<void*>, size, 0xC);
RED4EXT_ASSERT_OFFSET(SortedArray<void*>, flags, 0x10);

template<typename T, class Compare = std::less<T>>
using SortedUniqueArray = SortedArray<T, Compare, true>;
} // namespace RED4ext
