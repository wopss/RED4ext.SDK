#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RequestResetContextEvent : red::Event
{
    static constexpr const char* NAME = "gameuiRequestResetContextEvent";
    static constexpr const char* ALIAS = "ResetUIGameContextEvent";

};
RED4EXT_ASSERT_SIZE(RequestResetContextEvent, 0x40);
} // namespace game::ui
using ResetUIGameContextEvent = game::ui::RequestResetContextEvent;
} // namespace RED4ext
