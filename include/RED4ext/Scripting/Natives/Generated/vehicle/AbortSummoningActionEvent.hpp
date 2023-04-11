#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionEvent.hpp>

namespace RED4ext
{
namespace vehicle
{
struct AbortSummoningActionEvent : game::ActionEvent
{
    static constexpr const char* NAME = "vehicleAbortSummoningActionEvent";
    static constexpr const char* ALIAS = "AbortSummoningActionEvent";

};
RED4EXT_ASSERT_SIZE(AbortSummoningActionEvent, 0x68);
} // namespace vehicle
using vehicleAbortSummoningActionEvent = vehicle::AbortSummoningActionEvent;
using AbortSummoningActionEvent = vehicle::AbortSummoningActionEvent;
} // namespace RED4ext

// clang-format on
