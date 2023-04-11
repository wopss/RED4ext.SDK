#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierData_Deprecated.hpp>

namespace RED4ext
{
namespace game
{
struct RandomStatModifierData_Deprecated : game::StatModifierData_Deprecated
{
    static constexpr const char* NAME = "gameRandomStatModifierData_Deprecated";
    static constexpr const char* ALIAS = "gameRandomStatModifierData";

    float value; // 48
    uint8_t unk4C[0x58 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(RandomStatModifierData_Deprecated, 0x58);
} // namespace game
using gameRandomStatModifierData_Deprecated = game::RandomStatModifierData_Deprecated;
using gameRandomStatModifierData = game::RandomStatModifierData_Deprecated;
} // namespace RED4ext

// clang-format on
