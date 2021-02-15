#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/StatusEffect_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct GameplayRestrictionStatusEffect_Record : game::data::StatusEffect_Record
{
    static constexpr const char* NAME = "gamedataGameplayRestrictionStatusEffect_Record";
    static constexpr const char* ALIAS = "GameplayRestrictionStatusEffect_Record";

    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(GameplayRestrictionStatusEffect_Record, 0x90);
} // namespace game::data
using GameplayRestrictionStatusEffect_Record = game::data::GameplayRestrictionStatusEffect_Record;
} // namespace RED4ext
