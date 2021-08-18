#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EState.hpp>

namespace RED4ext
{
namespace vehicle { 
struct ChangeStateEvent : red::Event
{
    static constexpr const char* NAME = "vehicleChangeStateEvent";
    static constexpr const char* ALIAS = NAME;

    vehicle::EState state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ChangeStateEvent, 0x48);
} // namespace vehicle
} // namespace RED4ext
