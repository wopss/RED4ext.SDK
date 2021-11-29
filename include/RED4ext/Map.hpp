#pragma once

#include <algorithm>
#include <cstdint>
#include <functional>

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Relocation.hpp>

namespace RED4ext
{
namespace Memory
{
struct IMemory;
}

template<typename K, typename T, class Compare = std::less<K>>
struct Map
{
    enum class Flags : int32_t
    {
        NotSorted = 1 << 0
    };

    Map(Memory::IAllocator* aAllocator = nullptr)
        : Map(aAllocator, aAllocator)
    {
    }

    Map(Memory::IAllocator* aKeyAllocator, Memory::IAllocator* aValueAllocator)
        : keys(aKeyAllocator)
        , values(aValueAllocator)
        , flags(0)
    {
    }

    void ForEach(std::function<void(const K&, T&)> aFunctor) const
    {
        uint32_t size = GetSize();
        for (uint32_t i = 0; i != size; ++i)
        {
            aFunctor(keys[i], const_cast<T&>(values[i]));
        }
    }

    uint32_t GetCapactiy() const
    {
        return keys.capacity;
    }

    uint32_t GetSize() const
    {
        return keys.size;
    }

    T* Get(const K& aKey)
    {
        const auto it = LowerBound(aKey);
        if (it == keys.end() || *it != aKey)
            return nullptr;

        uint32_t index = static_cast<uint32_t>(it - keys.begin());
        return &values[index];
    }

    std::pair<T*, bool> Insert(const K& aKey, const T& aValue)
    {
        return Emplace(std::forward<const K&>(aKey), std::forward<const T&>(aValue));
    }

    std::pair<T*, bool> Insert(const K& aKey, T&& aValue)
    {
        return Emplace(std::forward<const K&>(aKey), std::forward<T&&>(aValue));
    }

    std::pair<T*, bool> InsertOrAssign(const K& aKey, const T& aValue)
    {
        std::pair<T*, bool> pair = Emplace(std::forward<const K&>(aKey), std::forward<const T&>(aValue));
        if (!pair.second)
        {
            *pair.first = aValue;
        }
        return pair;
    }

    std::pair<T*, bool> InsertOrAssign(const K& aKey, T&& aValue)
    {
        std::pair<T*, bool> pair = Emplace(std::forward<const K&>(aKey), std::forward<T&&>(aValue));
        if (!pair.second)
        {
            *pair.first = std::move(aValue);
        }
        return pair;
    }

    template<class... TArgs>
    std::pair<T*, bool> Emplace(const K& aKey, TArgs&&... aArgs)
    {
        const auto it = LowerBound(aKey);
        uint32_t index = static_cast<uint32_t>(it - keys.begin());
        if (it != keys.end() && *it == aKey)
        {
            // Do nothing if the map already contains this key.
            return {&values[index], false};
        }

        keys.Emplace(&keys.entries[index], std::forward<const K&>(aKey));
        values.Emplace(&values.entries[index], std::forward<TArgs>(aArgs)...);
        return {&values[index], true};
    }

    bool Remove(const K& aKey)
    {
        const T* valuePtr = Get(aKey);
        if (valuePtr == nullptr)
            return false;

        uint32_t index = static_cast<uint32_t>(valuePtr - values.begin());
        return RemoveAt(index);
    }

    bool RemoveAt(uint32_t aIndex)
    {
        if (aIndex >= GetSize())
            return false;

        keys.RemoveAt(aIndex);
        values.RemoveAt(aIndex);
        return true;
    }

    void Sort()
    {
        // Need to somehow use std::sort...
        // This is how the game does it:

        uint32_t size = GetSize();
        for (uint32_t i = 1; i < size; ++i)
        {
            K tmpKey = std::move(keys[i]);
            T tmpValue = std::move(values[i]);

            uint32_t currentIdx = i;
            while (currentIdx != 0)
            {
                if (!Compare{}(tmpKey, keys[currentIdx - 1]))
                    break;

                keys[currentIdx] = std::move(keys[currentIdx - 1]);
                values[currentIdx] = std::move(values[currentIdx - 1]);
                --currentIdx;
            }

            keys[currentIdx] = std::move(tmpKey);
            values[currentIdx] = std::move(tmpValue);
        }

        flags &= ~(int32_t)Flags::NotSorted;
    }

    void Clear()
    {
        keys.Clear();
        values.Clear();
    }

    void Reserve(uint32_t aCount)
    {
        keys.Reserve(aCount);
        values.Reserve(aCount);
    }

    DynArray<K> keys;   // 00
    DynArray<T> values; // 10
    int32_t flags;      // 20

private:
    const K* LowerBound(const K& aKey) const
    {
        if ((flags & (int32_t)Flags::NotSorted) == (int32_t)Flags::NotSorted)
        {
            const_cast<Map*>(this)->Sort();
        }

        return std::lower_bound(keys.begin(), keys.end(), aKey, Compare{});
    }
};
using MapVoid = Map<void*, void*>;

RED4EXT_ASSERT_SIZE(RED4EXT_ASSERT_ESCAPE(MapVoid), 0x28);
RED4EXT_ASSERT_OFFSET(RED4EXT_ASSERT_ESCAPE(MapVoid), keys, 0);
RED4EXT_ASSERT_OFFSET(RED4EXT_ASSERT_ESCAPE(MapVoid), values, 0x10);
RED4EXT_ASSERT_OFFSET(RED4EXT_ASSERT_ESCAPE(MapVoid), flags, 0x20);
} // namespace RED4ext
