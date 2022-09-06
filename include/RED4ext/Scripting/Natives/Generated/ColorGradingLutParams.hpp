#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EColorMappingFunction.hpp>

namespace RED4ext
{
struct CBitmapTexture;

struct ColorGradingLutParams
{
    static constexpr const char* NAME = "ColorGradingLutParams";
    static constexpr const char* ALIAS = NAME;

    Ref<CBitmapTexture> LUT; // 00
    EColorMappingFunction inputMapping; // 18
    EColorMappingFunction outputMapping; // 19
    uint8_t unk1A[0x20 - 0x1A]; // 1A
};
RED4EXT_ASSERT_SIZE(ColorGradingLutParams, 0x20);
} // namespace RED4ext

// clang-format on
