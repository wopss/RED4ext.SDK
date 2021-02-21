#pragma once

#include <cstdint>
#include <functional>

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDfunc.hpp>

namespace RED4ext
{
struct IMemoryAllocator;

template<typename T>
struct DynArray
{
    T operator[](uint32_t aIndex) const
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
        auto newSize = size + 1;
        if (newSize > capacity)
        {
            Grow();
        }

        size = newSize;
        new (&entries[newSize - 1]) T(std::forward<TArgs>(aArgs)...);
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
        if ((aIndex + 1) < size)
        {
            size_t entriesCount = size - (aIndex + 1);
            std::memcpy(&entries[aIndex], &entries[aIndex + 1], entriesCount * sizeof(T));
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

    IMemoryAllocator* GetAllocator()
    {
        // This usually do some overflow checks, I don't think it is required to do that too, since the game does it at
        // every insert.
        return reinterpret_cast<IMemoryAllocator*>(&entries[capacity]);
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
    void Grow()
    {
        // Alignment seems to always be 8.
        constexpr uint32_t alignment = 8;

        auto newSize = size + 1;
        auto capacity = CalculateGrowth(newSize);
        using func_t = void (*)(DynArray * aThis, uint32_t aCapacity, uint32_t aElementSize, uint32_t aAlignment,
                                void (*a5)(int64_t, int64_t, int64_t, int64_t));

        static REDfunc<func_t> func(Addresses::DynArray_Realloc);
        func(this, capacity, sizeof(T), alignment, nullptr);
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
};
RED4EXT_ASSERT_SIZE(DynArray<void*>, 0x10);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, capacity, 0x8);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, size, 0xC);
} // namespace RED4ext
