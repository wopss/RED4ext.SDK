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
struct ContainerFilledEvent : red::Event
{
    static constexpr const char* NAME = "gameContainerFilledEvent";
    static constexpr const char* ALIAS = "ContainerFilledEvent";

};
RED4EXT_ASSERT_SIZE(ContainerFilledEvent, 0x40);
} // namespace game
using gameContainerFilledEvent = game::ContainerFilledEvent;
using ContainerFilledEvent = game::ContainerFilledEvent;
} // namespace RED4ext

// clang-format on
