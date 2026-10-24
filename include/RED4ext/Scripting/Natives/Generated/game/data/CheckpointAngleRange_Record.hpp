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
struct CheckpointAngleRange_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCheckpointAngleRange_Record";
    static constexpr const char* ALIAS = "CheckpointAngleRange_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CheckpointAngleRange_Record, 0x90);
} // namespace game::data
using gamedataCheckpointAngleRange_Record = game::data::CheckpointAngleRange_Record;
using CheckpointAngleRange_Record = game::data::CheckpointAngleRange_Record;
} // namespace RED4ext

// clang-format on
