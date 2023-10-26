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
struct Achievement_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAchievement_Record";
    static constexpr const char* ALIAS = "Achievement_Record";

    uint8_t unk48[0xC8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Achievement_Record, 0xC8);
} // namespace game::data
using gamedataAchievement_Record = game::data::Achievement_Record;
using Achievement_Record = game::data::Achievement_Record;
} // namespace RED4ext

// clang-format on
