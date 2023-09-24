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
struct AIActionSlideData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIActionSlideData_Record";
    static constexpr const char* ALIAS = "AIActionSlideData_Record";

    uint8_t unk48[0x108 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionSlideData_Record, 0x108);
} // namespace game::data
using gamedataAIActionSlideData_Record = game::data::AIActionSlideData_Record;
using AIActionSlideData_Record = game::data::AIActionSlideData_Record;
} // namespace RED4ext

// clang-format on
