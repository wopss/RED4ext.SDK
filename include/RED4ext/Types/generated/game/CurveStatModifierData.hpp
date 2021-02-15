#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/StatModifierData.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { 
struct CurveStatModifierData : game::StatModifierData
{
    static constexpr const char* NAME = "gameCurveStatModifierData";
    static constexpr const char* ALIAS = NAME;

    CName curveName; // 48
    CName columnName; // 50
    game::data::StatType curveStat; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(CurveStatModifierData, 0x60);
} // namespace game
} // namespace RED4ext
