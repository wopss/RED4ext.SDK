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
struct RequestPushContextEvent : red::Event
{
    static constexpr const char* NAME = "gameuiRequestPushContextEvent";
    static constexpr const char* ALIAS = "PushUIGameContextEvent";

    UIGameContext context; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(RequestPushContextEvent, 0x48);
} // namespace game::ui
using gameuiRequestPushContextEvent = game::ui::RequestPushContextEvent;
using PushUIGameContextEvent = game::ui::RequestPushContextEvent;
} // namespace RED4ext

// clang-format on
