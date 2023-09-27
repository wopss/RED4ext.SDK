#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/DriveCommandUpdate.hpp>

namespace RED4ext
{
namespace AI
{
struct DrivePatrolUpdate : AI::DriveCommandUpdate
{
    static constexpr const char* NAME = "AIDrivePatrolUpdate";
    static constexpr const char* ALIAS = "DrivePatrolUpdate";

    uint32_t numPatrolLoops; // 50
    bool emergencyPatrol; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
};
RED4EXT_ASSERT_SIZE(DrivePatrolUpdate, 0x58);
} // namespace AI
using AIDrivePatrolUpdate = AI::DrivePatrolUpdate;
using DrivePatrolUpdate = AI::DrivePatrolUpdate;
} // namespace RED4ext

// clang-format on
