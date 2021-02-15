#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct StoppedMovingEvent : red::Event
{
    static constexpr const char* NAME = "entStoppedMovingEvent";
    static constexpr const char* ALIAS = "StoppedMovingEvent";

};
RED4EXT_ASSERT_SIZE(StoppedMovingEvent, 0x40);
} // namespace ent
using StoppedMovingEvent = ent::StoppedMovingEvent;
} // namespace RED4ext
