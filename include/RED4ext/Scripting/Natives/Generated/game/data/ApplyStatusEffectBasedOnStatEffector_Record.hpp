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
struct ApplyStatusEffectBasedOnStatEffector_Record : game::data::ApplyStatusEffectEffector_Record
{
    static constexpr const char* NAME = "gamedataApplyStatusEffectBasedOnStatEffector_Record";
    static constexpr const char* ALIAS = "ApplyStatusEffectBasedOnStatEffector_Record";

    uint8_t unkE0[0xF0 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(ApplyStatusEffectBasedOnStatEffector_Record, 0xF0);
} // namespace game::data
using gamedataApplyStatusEffectBasedOnStatEffector_Record = game::data::ApplyStatusEffectBasedOnStatEffector_Record;
using ApplyStatusEffectBasedOnStatEffector_Record = game::data::ApplyStatusEffectBasedOnStatEffector_Record;
} // namespace RED4ext

// clang-format on
