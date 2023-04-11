#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace game
{
struct LightSettings
{
    static constexpr const char* NAME = "gameLightSettings";
    static constexpr const char* ALIAS = NAME;

    float strength; // 00
    float intensity; // 04
    float radius; // 08
    Color color; // 0C
    uint8_t unk10[0x14 - 0x10]; // 10
    float innerAngle; // 14
    float outerAngle; // 18
};
RED4EXT_ASSERT_SIZE(LightSettings, 0x1C);
} // namespace game
using gameLightSettings = game::LightSettings;
} // namespace RED4ext

// clang-format on
