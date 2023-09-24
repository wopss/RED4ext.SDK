#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/TLS.hpp>
#endif

#include <intrin.h>

RED4EXT_INLINE RED4ext::TLS* RED4ext::TLS::Get()
{
    return *reinterpret_cast<TLS**>(__readgsqword(0x58));
}
