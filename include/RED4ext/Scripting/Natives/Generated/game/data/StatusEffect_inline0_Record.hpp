#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatModifierGroup_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct StatusEffect_inline0_Record : game::data::StatModifierGroup_Record
{
    static constexpr const char* NAME = "gamedataStatusEffect_inline0_Record";
    static constexpr const char* ALIAS = "StatusEffect_inline0_Record";

};
RED4EXT_ASSERT_SIZE(StatusEffect_inline0_Record, 0xA0);
} // namespace game::data
using gamedataStatusEffect_inline0_Record = game::data::StatusEffect_inline0_Record;
using StatusEffect_inline0_Record = game::data::StatusEffect_inline0_Record;
} // namespace RED4ext

// clang-format on
