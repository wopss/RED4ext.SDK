#pragma once

#include <cstdint>

namespace RED4ext
{
constexpr uint64_t FNV1a(const char* aText)
{
    constexpr uint64_t basis = 0xCBF29CE484222325;
    constexpr uint64_t prime = 0x100000001b3;

    uint64_t hash = basis;
    while (aText && *aText)
    {
        hash ^= *aText;
        hash *= prime;

        aText++;
    }

    return hash;
}

constexpr uint32_t FNV1a32(const uint8_t* data, const size_t len)
{
    constexpr uint32_t basis = 0x811c9dc5;
    constexpr uint32_t prime = 0x01000193;

    uint32_t hash = basis;
    for (size_t i = 0; i != len; ++i)
    {
        hash ^= data[i];
        hash *= prime;
    }

    return hash;
}

constexpr uint64_t FNV1a64(const uint8_t* data, const size_t len)
{
    constexpr uint64_t basis = 0xCBF29CE484222325;
    constexpr uint64_t prime = 0x100000001b3;

    uint64_t hash = basis;
    for (size_t i = 0; i != len; ++i)
    {
        hash ^= data[i];
        hash *= prime;
    }

    return hash;
}
} // namespace RED4ext
