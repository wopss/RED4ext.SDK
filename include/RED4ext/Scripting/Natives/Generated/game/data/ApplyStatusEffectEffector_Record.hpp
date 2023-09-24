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
struct ApplyStatusEffectEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataApplyStatusEffectEffector_Record";
    static constexpr const char* ALIAS = "ApplyStatusEffectEffector_Record";

    uint8_t unk88[0xE0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ApplyStatusEffectEffector_Record, 0xE0);
} // namespace game::data
using gamedataApplyStatusEffectEffector_Record = game::data::ApplyStatusEffectEffector_Record;
using ApplyStatusEffectEffector_Record = game::data::ApplyStatusEffectEffector_Record;
} // namespace RED4ext

// clang-format on
