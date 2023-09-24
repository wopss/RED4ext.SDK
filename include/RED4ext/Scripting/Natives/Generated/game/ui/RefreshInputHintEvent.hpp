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
struct RefreshInputHintEvent : red::Event
{
    static constexpr const char* NAME = "gameuiRefreshInputHintEvent";
    static constexpr const char* ALIAS = "RefreshInputHintEvent";

};
RED4EXT_ASSERT_SIZE(RefreshInputHintEvent, 0x40);
} // namespace game::ui
using gameuiRefreshInputHintEvent = game::ui::RefreshInputHintEvent;
using RefreshInputHintEvent = game::ui::RefreshInputHintEvent;
} // namespace RED4ext

// clang-format on
