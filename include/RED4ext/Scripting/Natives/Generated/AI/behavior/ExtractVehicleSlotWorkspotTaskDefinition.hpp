#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ExtractVehicleSlotWorkspotTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorExtractVehicleSlotWorkspotTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> outWorkspotData; // 38
};
RED4EXT_ASSERT_SIZE(ExtractVehicleSlotWorkspotTaskDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorExtractVehicleSlotWorkspotTaskDefinition = AI::behavior::ExtractVehicleSlotWorkspotTaskDefinition;
} // namespace RED4ext

// clang-format on
