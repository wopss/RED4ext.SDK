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
struct SetNpcImageEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetNpcImageEvent";
    static constexpr const char* ALIAS = "SetNpcImageEvent";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SetNpcImageEvent, 0x58);
} // namespace game::ui
using gameuiSetNpcImageEvent = game::ui::SetNpcImageEvent;
using SetNpcImageEvent = game::ui::SetNpcImageEvent;
} // namespace RED4ext

// clang-format on
