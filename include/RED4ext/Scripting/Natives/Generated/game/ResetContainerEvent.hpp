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
struct ResetContainerEvent : red::Event
{
    static constexpr const char* NAME = "gameResetContainerEvent";
    static constexpr const char* ALIAS = "ResetContainerEvent";

};
RED4EXT_ASSERT_SIZE(ResetContainerEvent, 0x40);
} // namespace game
using gameResetContainerEvent = game::ResetContainerEvent;
using ResetContainerEvent = game::ResetContainerEvent;
} // namespace RED4ext

// clang-format on
