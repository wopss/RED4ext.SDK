#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace work { 
struct ReactionFinishedEvent : red::Event
{
    static constexpr const char* NAME = "workReactionFinishedEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ReactionFinishedEvent, 0x40);
} // namespace work
} // namespace RED4ext
