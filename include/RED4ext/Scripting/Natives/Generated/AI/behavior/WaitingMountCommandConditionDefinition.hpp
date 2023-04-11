#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct WaitingMountCommandConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorWaitingMountCommandConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> requestArgument; // 38
    CName callbackName; // 48
};
RED4EXT_ASSERT_SIZE(WaitingMountCommandConditionDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorWaitingMountCommandConditionDefinition = AI::behavior::WaitingMountCommandConditionDefinition;
} // namespace RED4ext

// clang-format on
