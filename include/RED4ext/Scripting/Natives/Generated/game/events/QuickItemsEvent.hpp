#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events { 
struct QuickItemsEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsQuickItemsEvent";
    static constexpr const char* ALIAS = "gameQuickItemsEvent";

    CName questName; // 40
};
RED4EXT_ASSERT_SIZE(QuickItemsEvent, 0x48);
} // namespace game::events
using gameQuickItemsEvent = game::events::QuickItemsEvent;
} // namespace RED4ext
