#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct CancelWorkspotCommandNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorCancelWorkspotCommandNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CancelWorkspotCommandNodeDefinition, 0x40);
} // namespace AI::behavior
using AIbehaviorCancelWorkspotCommandNodeDefinition = AI::behavior::CancelWorkspotCommandNodeDefinition;
} // namespace RED4ext

// clang-format on
