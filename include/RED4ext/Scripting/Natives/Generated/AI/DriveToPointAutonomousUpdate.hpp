#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/DriveCommandUpdate.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace AI
{
struct __declspec(align(0x10)) DriveToPointAutonomousUpdate : AI::DriveCommandUpdate
{
    static constexpr const char* NAME = "AIDriveToPointAutonomousUpdate";
    static constexpr const char* ALIAS = "DriveToPointAutonomousUpdate";

    Vector4 targetPosition; // 50
    float minimumDistanceToTarget; // 60
    bool driveDownTheRoadIndefinitely; // 64
    uint8_t unk65[0x70 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(DriveToPointAutonomousUpdate, 0x70);
} // namespace AI
using AIDriveToPointAutonomousUpdate = AI::DriveToPointAutonomousUpdate;
using DriveToPointAutonomousUpdate = AI::DriveToPointAutonomousUpdate;
} // namespace RED4ext

// clang-format on
