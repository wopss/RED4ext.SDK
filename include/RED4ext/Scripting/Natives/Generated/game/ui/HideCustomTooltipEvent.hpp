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
struct HideCustomTooltipEvent : red::Event
{
    static constexpr const char* NAME = "gameuiHideCustomTooltipEvent";
    static constexpr const char* ALIAS = "HideCustomTooltipEvent";

};
RED4EXT_ASSERT_SIZE(HideCustomTooltipEvent, 0x40);
} // namespace game::ui
using gameuiHideCustomTooltipEvent = game::ui::HideCustomTooltipEvent;
using HideCustomTooltipEvent = game::ui::HideCustomTooltipEvent;
} // namespace RED4ext

// clang-format on
