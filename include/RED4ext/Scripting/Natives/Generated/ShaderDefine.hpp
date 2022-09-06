#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct ShaderDefine
{
    static constexpr const char* NAME = "ShaderDefine";
    static constexpr const char* ALIAS = NAME;

    CString name; // 00
    CString value; // 20
};
RED4EXT_ASSERT_SIZE(ShaderDefine, 0x40);
} // namespace RED4ext

// clang-format on
