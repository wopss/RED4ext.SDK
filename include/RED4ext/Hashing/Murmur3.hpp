#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
uint32_t Murmur3_32(const uint8_t* aKey, const size_t aLength, const uint32_t aSeed);
}

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Hashing/Murmur3-inl.hpp>
#endif
