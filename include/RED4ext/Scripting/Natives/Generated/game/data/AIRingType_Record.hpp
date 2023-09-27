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
struct AIRingType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIRingType_Record";
    static constexpr const char* ALIAS = "AIRingType_Record";

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIRingType_Record, 0x80);
} // namespace game::data
using gamedataAIRingType_Record = game::data::AIRingType_Record;
using AIRingType_Record = game::data::AIRingType_Record;
} // namespace RED4ext

// clang-format on
