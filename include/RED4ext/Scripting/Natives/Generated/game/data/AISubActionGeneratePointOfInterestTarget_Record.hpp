#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionGeneratePointOfInterestTarget_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionGeneratePointOfInterestTarget_Record";
    static constexpr const char* ALIAS = "AISubActionGeneratePointOfInterestTarget_Record";

    uint8_t unk48[0xE8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionGeneratePointOfInterestTarget_Record, 0xE8);
} // namespace game::data
using gamedataAISubActionGeneratePointOfInterestTarget_Record = game::data::AISubActionGeneratePointOfInterestTarget_Record;
using AISubActionGeneratePointOfInterestTarget_Record = game::data::AISubActionGeneratePointOfInterestTarget_Record;
} // namespace RED4ext

// clang-format on
