#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/generated/game/StatModifierType.hpp>
#include <RED4ext/Types/generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game { 
struct StatModifierData : IScriptable
{
    static constexpr const char* NAME = "gameStatModifierData";
    static constexpr const char* ALIAS = NAME;

    game::data::StatType statType; // 40
    game::StatModifierType modifierType; // 44
};
RED4EXT_ASSERT_SIZE(StatModifierData, 0x48);
} // namespace game
} // namespace RED4ext
