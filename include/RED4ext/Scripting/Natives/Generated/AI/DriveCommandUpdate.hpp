#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace AI
{
struct DriveCommandUpdate : IScriptable
{
    static constexpr const char* NAME = "AIDriveCommandUpdate";
    static constexpr const char* ALIAS = "DriveCommandUpdate";

    float minSpeed; // 40
    float maxSpeed; // 44
    bool clearTrafficOnPath; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(DriveCommandUpdate, 0x50);
} // namespace AI
using AIDriveCommandUpdate = AI::DriveCommandUpdate;
using DriveCommandUpdate = AI::DriveCommandUpdate;
} // namespace RED4ext

// clang-format on
