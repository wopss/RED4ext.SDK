#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct InstantTaskNodeDefinition : AI::behavior::TaskNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorInstantTaskNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InstantTaskNodeDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorInstantTaskNodeDefinition = AI::behavior::InstantTaskNodeDefinition;
} // namespace RED4ext

// clang-format on
