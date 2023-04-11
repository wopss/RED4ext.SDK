#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct StatModifierData_Deprecated : IScriptable
{
    static constexpr const char* NAME = "gameStatModifierData_Deprecated";
    static constexpr const char* ALIAS = "gameStatModifierData";

    game::data::StatType statType; // 40
    game::StatModifierType modifierType; // 44
};
RED4EXT_ASSERT_SIZE(StatModifierData_Deprecated, 0x48);
} // namespace game
using gameStatModifierData_Deprecated = game::StatModifierData_Deprecated;
using gameStatModifierData = game::StatModifierData_Deprecated;
} // namespace RED4ext

// clang-format on
