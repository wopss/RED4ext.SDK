#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct CharacterBrighteningAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "CharacterBrighteningAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float effectStrengthMultiplier; // 48
    float minDistance; // 4C
    float maxDistance; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    CurveData<float> envMultiplier; // 58
};
RED4EXT_ASSERT_SIZE(CharacterBrighteningAreaSettings, 0x90);
} // namespace RED4ext

// clang-format on
