#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct StatusEffectFX_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatusEffectFX_Record";
    static constexpr const char* ALIAS = "StatusEffectFX_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatusEffectFX_Record, 0x60);
} // namespace game::data
using gamedataStatusEffectFX_Record = game::data::StatusEffectFX_Record;
using StatusEffectFX_Record = game::data::StatusEffectFX_Record;
} // namespace RED4ext

// clang-format on
