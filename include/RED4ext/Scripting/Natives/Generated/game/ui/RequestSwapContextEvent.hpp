#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/UIGameContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RequestSwapContextEvent : red::Event
{
    static constexpr const char* NAME = "gameuiRequestSwapContextEvent";
    static constexpr const char* ALIAS = "SwapUIGameContextEvent";

    UIGameContext oldContext; // 40
    UIGameContext newContext; // 44
};
RED4EXT_ASSERT_SIZE(RequestSwapContextEvent, 0x48);
} // namespace game::ui
using gameuiRequestSwapContextEvent = game::ui::RequestSwapContextEvent;
using SwapUIGameContextEvent = game::ui::RequestSwapContextEvent;
} // namespace RED4ext

// clang-format on
