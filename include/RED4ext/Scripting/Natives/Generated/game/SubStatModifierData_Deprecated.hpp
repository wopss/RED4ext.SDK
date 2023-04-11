#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierData_Deprecated.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct SubStatModifierData_Deprecated : game::StatModifierData_Deprecated
{
    static constexpr const char* NAME = "gameSubStatModifierData_Deprecated";
    static constexpr const char* ALIAS = "gameSubStatModifierData";

    game::data::StatType refStatType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(SubStatModifierData_Deprecated, 0x50);
} // namespace game
using gameSubStatModifierData_Deprecated = game::SubStatModifierData_Deprecated;
using gameSubStatModifierData = game::SubStatModifierData_Deprecated;
} // namespace RED4ext

// clang-format on
