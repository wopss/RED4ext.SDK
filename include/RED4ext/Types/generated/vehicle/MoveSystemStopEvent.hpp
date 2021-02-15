#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ActionEvent.hpp>

namespace RED4ext
{
namespace vehicle { 
struct MoveSystemStopEvent : game::ActionEvent
{
    static constexpr const char* NAME = "vehicleMoveSystemStopEvent";
    static constexpr const char* ALIAS = "MoveSystemStopEvent";

};
RED4EXT_ASSERT_SIZE(MoveSystemStopEvent, 0x68);
} // namespace vehicle
using MoveSystemStopEvent = vehicle::MoveSystemStopEvent;
} // namespace RED4ext
