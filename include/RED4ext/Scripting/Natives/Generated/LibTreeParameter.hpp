#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeEParameterType.hpp>

namespace RED4ext
{
struct LibTreeParameter
{
    static constexpr const char* NAME = "LibTreeParameter";
    static constexpr const char* ALIAS = NAME;

    uint16_t parameterId; // 00
    uint8_t unk02[0x8 - 0x2]; // 2
    CName parameterName; // 08
    LibTreeEParameterType parameterType; // 10
    uint8_t unk12[0x18 - 0x12]; // 12
    Variant value; // 18
};
RED4EXT_ASSERT_SIZE(LibTreeParameter, 0x30);
} // namespace RED4ext

// clang-format on
