#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AddStatusEffectToAttackEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataAddStatusEffectToAttackEffector_Record";
    static constexpr const char* ALIAS = "AddStatusEffectToAttackEffector_Record";

    uint8_t unk88[0xB8 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(AddStatusEffectToAttackEffector_Record, 0xB8);
} // namespace game::data
using gamedataAddStatusEffectToAttackEffector_Record = game::data::AddStatusEffectToAttackEffector_Record;
using AddStatusEffectToAttackEffector_Record = game::data::AddStatusEffectToAttackEffector_Record;
} // namespace RED4ext

// clang-format on
