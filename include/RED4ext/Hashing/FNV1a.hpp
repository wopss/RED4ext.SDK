#pragma once

#include <cstdint>

namespace RED4ext
{
constexpr uint32_t FNV1a32(const char* aText, uint32_t aSeed = 0x811C9DC5)
{
    constexpr uint32_t prime = 0x01000193;

    uint32_t hash = aSeed;
    while (aText && *aText)
    {
        hash ^= *aText;
        hash *= prime;

        aText++;
    }

    return hash;
}

constexpr uint32_t FNV1a32(const uint8_t* aData, const size_t aLen, uint32_t aSeed = 0x811C9DC5)
{
    constexpr uint32_t prime = 0x01000193;

    uint32_t hash = aSeed;
    for (size_t i = 0; i != aLen; ++i)
    {
        hash ^= aData[i];
        hash *= prime;
    }

    return hash;
}

constexpr uint64_t FNV1a64(const char* aText, uint64_t aSeed = 0xCBF29CE484222325)
{
    constexpr uint64_t prime = 0x100000001b3;

    uint64_t hash = aSeed;
    while (aText && *aText)
    {
        hash ^= *aText;
        hash *= prime;

        aText++;
    }

    return hash;
}

constexpr uint64_t FNV1a64(const uint8_t* aData, const size_t aLen, uint64_t aSeed = 0xCBF29CE484222325)
{
    constexpr uint64_t prime = 0x100000001b3;

    uint64_t hash = aSeed;
    for (size_t i = 0; i != aLen; ++i)
    {
        hash ^= aData[i];
        hash *= prime;
    }

    return hash;
}

[[deprecated("Use 'FNV1a64' instead.")]]
constexpr uint64_t FNV1a(const char* aText, uint64_t aSeed = 0xCBF29CE484222325)
{
    return FNV1a64(aText, aSeed);
}
} // namespace RED4ext
