#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatusEffect_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct GameplayRestrictionStatusEffect_Record : game::data::StatusEffect_Record
{
    static constexpr const char* NAME = "gamedataGameplayRestrictionStatusEffect_Record";
    static constexpr const char* ALIAS = "GameplayRestrictionStatusEffect_Record";

    uint8_t unk160[0x170 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(GameplayRestrictionStatusEffect_Record, 0x170);
} // namespace game::data
using gamedataGameplayRestrictionStatusEffect_Record = game::data::GameplayRestrictionStatusEffect_Record;
using GameplayRestrictionStatusEffect_Record = game::data::GameplayRestrictionStatusEffect_Record;
} // namespace RED4ext

// clang-format on
