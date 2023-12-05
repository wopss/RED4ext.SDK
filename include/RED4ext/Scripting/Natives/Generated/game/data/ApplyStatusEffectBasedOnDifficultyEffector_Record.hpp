#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ApplyStatusEffectEffector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ApplyStatusEffectBasedOnDifficultyEffector_Record : game::data::ApplyStatusEffectEffector_Record
{
    static constexpr const char* NAME = "gamedataApplyStatusEffectBasedOnDifficultyEffector_Record";
    static constexpr const char* ALIAS = "ApplyStatusEffectBasedOnDifficultyEffector_Record";

    uint8_t unkE0[0x110 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(ApplyStatusEffectBasedOnDifficultyEffector_Record, 0x110);
} // namespace game::data
using gamedataApplyStatusEffectBasedOnDifficultyEffector_Record = game::data::ApplyStatusEffectBasedOnDifficultyEffector_Record;
using ApplyStatusEffectBasedOnDifficultyEffector_Record = game::data::ApplyStatusEffectBasedOnDifficultyEffector_Record;
} // namespace RED4ext

// clang-format on
