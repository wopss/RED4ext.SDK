#pragma once

#include <algorithm>
#include <cassert>
#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Containers/ArrayIterator.hpp>

template<typename T, uint32_t MAX_LEN>
struct StaticArray
{
    constexpr T& operator[](uint32_t aPos)
    {
        assert(aPos < Size());
        return Data()[aPos];
    }

    constexpr const T& operator[](uint32_t aPos) const
    {
        assert(aPos < Size());
        return Data()[aPos];
    }

    [[nodiscard]] constexpr T& At(int32_t aPos)
    {
        if (aPos < 0)
            aPos += Size();

        if (aPos < 0 || aPos >= Size())
            throw std::out_of_range("StaticArray::At out of range");

        return Data()[static_cast<uint32_t>(aPos)];
    }

    [[nodiscard]] constexpr const T& At(int32_t aPos) const
    {
        if (aPos < 0)
            aPos += Size();

        if (aPos < 0 || aPos >= Size())
            throw std::out_of_range("StaticArray::At out of range");

        return Data()[static_cast<uint32_t>(aPos)];
    }

#pragma region Iterator

    constexpr T* begin() noexcept
    {
        return entries;
    }

    constexpr const T* begin() const noexcept
    {
        return entries;
    }

    constexpr T* end() noexcept
    {
        return entries + size;
    }

    constexpr const T* end() const noexcept
    {
        return entries + size;
    }
#pragma endregion

    constexpr T* Data() noexcept
    {
        return entries;
    }

    constexpr const T* Data() const noexcept
    {
        return entries;
    }

    constexpr uint32_t MaxSize() const noexcept
    {
        return MAX_LEN;
    }

    constexpr uint32_t Size() const noexcept
    {
        return size;
    }

    T entries[MAX_LEN]; // 00
    uint32_t size;
};
static_assert(sizeof(StaticArray<std::array<uint8_t, 5>, 32>) ==
              164); // StaticArray<GpuWrapApiVertexPackingPackingElement, 32>