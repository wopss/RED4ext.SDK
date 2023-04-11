#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CommandState.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace AI { struct Command; }

namespace AI
{
struct NPCCommandStateEvent : red::Event
{
    static constexpr const char* NAME = "AINPCCommandStateEvent";
    static constexpr const char* ALIAS = "AICommandStateEvent";

    Handle<AI::Command> command; // 40
    AI::CommandState newState; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(NPCCommandStateEvent, 0x58);
} // namespace AI
using AINPCCommandStateEvent = AI::NPCCommandStateEvent;
using AICommandStateEvent = AI::NPCCommandStateEvent;
} // namespace RED4ext

// clang-format on
