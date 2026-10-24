#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CheckpointAngleRange_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct GyroAngleCheckpoint_inline0_Record : game::data::CheckpointAngleRange_Record
{
    static constexpr const char* NAME = "gamedataGyroAngleCheckpoint_inline0_Record";
    static constexpr const char* ALIAS = "GyroAngleCheckpoint_inline0_Record";

};
RED4EXT_ASSERT_SIZE(GyroAngleCheckpoint_inline0_Record, 0x90);
} // namespace game::data
using gamedataGyroAngleCheckpoint_inline0_Record = game::data::GyroAngleCheckpoint_inline0_Record;
using GyroAngleCheckpoint_inline0_Record = game::data::GyroAngleCheckpoint_inline0_Record;
} // namespace RED4ext

// clang-format on
