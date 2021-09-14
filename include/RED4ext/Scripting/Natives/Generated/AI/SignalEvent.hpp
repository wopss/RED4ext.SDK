#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/TaggedAIEvent.hpp>

namespace RED4ext
{
namespace AI { 
struct SignalEvent : AI::TaggedAIEvent
{
    static constexpr const char* NAME = "AISignalEvent";
    static constexpr const char* ALIAS = "SignalEvent";

};
RED4EXT_ASSERT_SIZE(SignalEvent, 0x60);
} // namespace AI
using SignalEvent = AI::SignalEvent;
} // namespace RED4ext
