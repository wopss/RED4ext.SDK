#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/TargetTrackerManagerInterface.hpp>

namespace RED4ext
{
namespace AI
{
struct TargetTrackerManager : AI::TargetTrackerManagerInterface
{
    static constexpr const char* NAME = "AITargetTrackerManager";
    static constexpr const char* ALIAS = "TargetTrackerManager";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TargetTrackerManager, 0xA0);
} // namespace AI
using AITargetTrackerManager = AI::TargetTrackerManager;
using TargetTrackerManager = AI::TargetTrackerManager;
} // namespace RED4ext

// clang-format on
