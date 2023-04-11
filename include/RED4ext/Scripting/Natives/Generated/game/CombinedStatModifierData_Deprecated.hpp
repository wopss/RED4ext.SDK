#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CombinedStatOperation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierData_Deprecated.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatObjectsRelation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct CombinedStatModifierData_Deprecated : game::StatModifierData_Deprecated
{
    static constexpr const char* NAME = "gameCombinedStatModifierData_Deprecated";
    static constexpr const char* ALIAS = "gameCombinedStatModifierData";

    game::data::StatType refStatType; // 48
    game::StatObjectsRelation refObject; // 4C
    game::CombinedStatOperation operation; // 50
    float value; // 54
};
RED4EXT_ASSERT_SIZE(CombinedStatModifierData_Deprecated, 0x58);
} // namespace game
using gameCombinedStatModifierData_Deprecated = game::CombinedStatModifierData_Deprecated;
using gameCombinedStatModifierData = game::CombinedStatModifierData_Deprecated;
} // namespace RED4ext

// clang-format on
