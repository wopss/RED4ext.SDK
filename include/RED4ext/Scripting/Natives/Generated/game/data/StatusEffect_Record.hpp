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
struct StatusEffect_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStatusEffect_Record";
    static constexpr const char* ALIAS = "StatusEffect_Record";

    uint8_t unk48[0x160 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StatusEffect_Record, 0x160);
} // namespace game::data
using gamedataStatusEffect_Record = game::data::StatusEffect_Record;
using StatusEffect_Record = game::data::StatusEffect_Record;
} // namespace RED4ext

// clang-format on
