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
struct SelectWorkspotEntryTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorSelectWorkspotEntryTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> workspotData; // 38
    Handle<AI::ArgumentMapping> destinationPosition; // 48
    Handle<AI::ArgumentMapping> tangentPoint; // 58
    Handle<AI::ArgumentMapping> entranceFromStand; // 68
};
RED4EXT_ASSERT_SIZE(SelectWorkspotEntryTaskDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorSelectWorkspotEntryTaskDefinition = AI::behavior::SelectWorkspotEntryTaskDefinition;
} // namespace RED4ext

// clang-format on
