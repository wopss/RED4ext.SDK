#pragma once

#include <RED4ext/Common.hpp>
#include <cstdint>

namespace RED4ext
{
uint32_t Murmur3_32(const char* aText, const uint32_t aSeed = 0X5EEDBA5E);
uint32_t Murmur3_32(const uint8_t* aKey, const size_t aLength, const uint32_t aSeed = 0X5EEDBA5E);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Hashing/Murmur3-inl.hpp>
#endif
