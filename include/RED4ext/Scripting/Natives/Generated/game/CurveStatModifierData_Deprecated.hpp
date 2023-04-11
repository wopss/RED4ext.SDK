#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatModifierData_Deprecated.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct CurveStatModifierData_Deprecated : game::StatModifierData_Deprecated
{
    static constexpr const char* NAME = "gameCurveStatModifierData_Deprecated";
    static constexpr const char* ALIAS = "gameCurveStatModifierData";

    CName curveName; // 48
    CName columnName; // 50
    game::data::StatType curveStat; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(CurveStatModifierData_Deprecated, 0x60);
} // namespace game
using gameCurveStatModifierData_Deprecated = game::CurveStatModifierData_Deprecated;
using gameCurveStatModifierData = game::CurveStatModifierData_Deprecated;
} // namespace RED4ext

// clang-format on
