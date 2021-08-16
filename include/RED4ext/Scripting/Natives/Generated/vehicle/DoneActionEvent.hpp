#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct DoneActionEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDoneActionEvent";
    static constexpr const char* ALIAS = "DoneActionEvent";

};
RED4EXT_ASSERT_SIZE(DoneActionEvent, 0x40);
} // namespace vehicle
using DoneActionEvent = vehicle::DoneActionEvent;
} // namespace RED4ext
