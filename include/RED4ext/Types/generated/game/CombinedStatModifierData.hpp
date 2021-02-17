#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/CombinedStatOperation.hpp>
#include <RED4ext/Types/generated/game/StatModifierData.hpp>
#include <RED4ext/Types/generated/game/StatObjectsRelation.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { 
struct CombinedStatModifierData : game::StatModifierData
{
    static constexpr const char* NAME = "gameCombinedStatModifierData";
    static constexpr const char* ALIAS = NAME;

    game::data::StatType refStatType; // 48
    game::StatObjectsRelation refObject; // 4C
    game::CombinedStatOperation operation; // 50
    float value; // 54
};
RED4EXT_ASSERT_SIZE(CombinedStatModifierData, 0x58);
} // namespace game
} // namespace RED4ext
