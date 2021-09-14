#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/UIGameContext.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RequestPopContextEvent : red::Event
{
    static constexpr const char* NAME = "gameuiRequestPopContextEvent";
    static constexpr const char* ALIAS = "PopUIGameContextEvent";

    UIGameContext context; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(RequestPopContextEvent, 0x48);
} // namespace game::ui
using PopUIGameContextEvent = game::ui::RequestPopContextEvent;
} // namespace RED4ext
