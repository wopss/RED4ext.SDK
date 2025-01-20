#pragma once

#include <RED4ext/Memory/Pool.hpp>
#include <cstdint>

namespace RED4ext::Memory
{
// Thanks @expired6978 for decoding this struct.
struct Vault
{
    static Vault* Get();

    int8_t unk0[0xD180];       // 00
    PoolRegistry poolRegistry; // D180
};
RED4EXT_ASSERT_SIZE(Vault, 0x1C188);
} // namespace RED4ext::Memory

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Memory/Vault-inl.hpp>
#endif
