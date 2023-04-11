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
struct ConvertCommandToDynamicWorkspotTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorConvertCommandToDynamicWorkspotTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> command; // 38
    Handle<AI::ArgumentMapping> outWorkspotData; // 48
};
RED4EXT_ASSERT_SIZE(ConvertCommandToDynamicWorkspotTaskDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorConvertCommandToDynamicWorkspotTaskDefinition = AI::behavior::ConvertCommandToDynamicWorkspotTaskDefinition;
} // namespace RED4ext

// clang-format on
