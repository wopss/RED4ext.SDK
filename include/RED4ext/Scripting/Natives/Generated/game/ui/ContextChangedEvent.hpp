#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/Context.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ContextChangedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiContextChangedEvent";
    static constexpr const char* ALIAS = "UIGameContextChangedEvent";

    game::ui::Context oldContext; // 40
    game::ui::Context newContext; // 44
};
RED4EXT_ASSERT_SIZE(ContextChangedEvent, 0x48);
} // namespace game::ui
using gameuiContextChangedEvent = game::ui::ContextChangedEvent;
using UIGameContextChangedEvent = game::ui::ContextChangedEvent;
} // namespace RED4ext

// clang-format on
