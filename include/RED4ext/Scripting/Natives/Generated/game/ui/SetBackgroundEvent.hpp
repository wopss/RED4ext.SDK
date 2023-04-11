#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SetBackgroundEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetBackgroundEvent";
    static constexpr const char* ALIAS = "SetBackgroundEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SetBackgroundEvent, 0x48);
} // namespace game::ui
using gameuiSetBackgroundEvent = game::ui::SetBackgroundEvent;
using SetBackgroundEvent = game::ui::SetBackgroundEvent;
} // namespace RED4ext

// clang-format on
