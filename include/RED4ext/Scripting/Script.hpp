#pragma once

#include <RED4ext/Map.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{

struct CCompiledCode
{
    uint32_t unk00;      // 00
    uint32_t unk04;      // 04
    DataBuffer bytecode; // 08
};
RED4EXT_ASSERT_SIZE(CCompiledCode, 0x30);
RED4EXT_ASSERT_OFFSET(CCompiledCode, bytecode, 0x08);

} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Script-inl.hpp>
#endif
