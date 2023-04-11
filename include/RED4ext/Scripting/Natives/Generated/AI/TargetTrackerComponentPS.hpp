#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ThreatSaveData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace AI
{
struct TargetTrackerComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "AITargetTrackerComponentPS";
    static constexpr const char* ALIAS = NAME;

    DynArray<AI::ThreatSaveData> threatsSaveData; // 68
    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(TargetTrackerComponentPS, 0x80);
} // namespace AI
using AITargetTrackerComponentPS = AI::TargetTrackerComponentPS;
} // namespace RED4ext

// clang-format on
