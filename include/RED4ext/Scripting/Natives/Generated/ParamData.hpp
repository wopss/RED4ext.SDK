#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct ParamData
{
    static constexpr const char* NAME = "ParamData";
    static constexpr const char* ALIAS = NAME;

    CString name; // 00
    CString type; // 20
    Variant defaultValue; // 40
};
RED4EXT_ASSERT_SIZE(ParamData, 0x58);
} // namespace RED4ext

// clang-format on
