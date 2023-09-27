#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ConstantStatModifier_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct StatusEffect_inline1_Record : game::data::ConstantStatModifier_Record
{
    static constexpr const char* NAME = "gamedataStatusEffect_inline1_Record";
    static constexpr const char* ALIAS = "StatusEffect_inline1_Record";

};
RED4EXT_ASSERT_SIZE(StatusEffect_inline1_Record, 0x70);
} // namespace game::data
using gamedataStatusEffect_inline1_Record = game::data::StatusEffect_inline1_Record;
using StatusEffect_inline1_Record = game::data::StatusEffect_inline1_Record;
} // namespace RED4ext

// clang-format on
