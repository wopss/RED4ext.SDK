#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskDefinition.hpp>

namespace RED4ext
{
namespace game { struct ActionEvent; }

namespace AI::behavior
{
struct SendActionEventTaskDefinition : AI::behavior::TaskDefinition
{
    static constexpr const char* NAME = "AIbehaviorSendActionEventTaskDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<game::ActionEvent> event; // 38
};
RED4EXT_ASSERT_SIZE(SendActionEventTaskDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorSendActionEventTaskDefinition = AI::behavior::SendActionEventTaskDefinition;
} // namespace RED4ext

// clang-format on
