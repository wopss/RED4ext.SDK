#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Hashing/Murmur3.hpp>
#endif

#include <cstring>

RED4EXT_INLINE uint32_t RED4ext::Murmur3_32(const char* aText, const uint32_t aSeed)
{
    return Murmur3_32(reinterpret_cast<const uint8_t*>(aText), strlen(aText), aSeed);
}

RED4EXT_INLINE uint32_t RED4ext::Murmur3_32(const uint8_t* aKey, const size_t aLength, const uint32_t aSeed)
{
    auto rotl = [](uint32_t x, uint32_t r) { return (x << r) | (x >> (32 - r)); };

    auto c1 = 0xCC9E2D51;
    auto c2 = 0x1B873593;
    auto r1 = 15;
    auto r2 = 13;
    auto m = 5;
    auto n = 0xE6546B64;

    auto hash = aSeed;
    for (size_t i = aLength >> 2; i; i--)
    {
        uint32_t k;
        memcpy(&k, aKey, sizeof(uint32_t));
        aKey += sizeof(uint32_t);

        k *= c1;
        k = rotl(k, r1);
        k *= c2;

        hash ^= k;
        hash = rotl(hash, r2);
        hash = hash * m + n;
    }

    uint32_t k = 0;
    for (size_t i = aLength & 3; i; i--)
    {
        k <<= 8;
        k |= aKey[i - 1];
    }

    k *= c1;
    k = rotl(k, r1);
    k *= c2;
    hash ^= k;

    hash ^= aLength;
    hash ^= hash >> 16;
    hash *= 0x85EBCA6B;
    hash ^= hash >> 13;
    hash *= 0xC2B2AE35;
    hash ^= hash >> 16;

    return hash;
}
