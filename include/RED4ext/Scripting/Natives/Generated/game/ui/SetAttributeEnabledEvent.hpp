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
struct SetAttributeEnabledEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetAttributeEnabledEvent";
    static constexpr const char* ALIAS = "SetAttributeEnabledEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SetAttributeEnabledEvent, 0x48);
} // namespace game::ui
using gameuiSetAttributeEnabledEvent = game::ui::SetAttributeEnabledEvent;
using SetAttributeEnabledEvent = game::ui::SetAttributeEnabledEvent;
} // namespace RED4ext

// clang-format on
