#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CommandContextsType.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompletionStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct CommandHandlerNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorCommandHandlerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    CName commandName; // 40
    bool useInheritance; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    DynArray<AI::CommandContextsType> contexts; // 50
    Handle<AI::ArgumentMapping> commandOut; // 60
    CName runningSignal; // 70
    bool waitForCommand; // 78
    bool retryIfCommandEnqueued; // 79
    uint8_t unk7A[0x7C - 0x7A]; // 7A
    AI::behavior::CompletionStatus resultIfNoCommand; // 7C
    AI::behavior::CompletionStatus resultIfChildFailed; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(CommandHandlerNodeDefinition, 0x88);
} // namespace AI::behavior
using AIbehaviorCommandHandlerNodeDefinition = AI::behavior::CommandHandlerNodeDefinition;
} // namespace RED4ext

// clang-format on
