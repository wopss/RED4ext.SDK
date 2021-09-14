#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace sense { 
struct BaseStimuliEvent : AI::AIEvent
{
    static constexpr const char* NAME = "senseBaseStimuliEvent";
    static constexpr const char* ALIAS = "BaseStimuliEvent";

};
RED4EXT_ASSERT_SIZE(BaseStimuliEvent, 0x50);
} // namespace sense
using BaseStimuliEvent = sense::BaseStimuliEvent;
} // namespace RED4ext
