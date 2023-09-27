#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct HalloweenEvent : red::Event
{
    static constexpr const char* NAME = "gameHalloweenEvent";
    static constexpr const char* ALIAS = "HalloweenEvent";

};
RED4EXT_ASSERT_SIZE(HalloweenEvent, 0x40);
} // namespace game
using gameHalloweenEvent = game::HalloweenEvent;
using HalloweenEvent = game::HalloweenEvent;
} // namespace RED4ext

// clang-format on
