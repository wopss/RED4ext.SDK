#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct DropItemEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsDropItemEvent";
    static constexpr const char* ALIAS = "gameDropItemEvent";

    TweakDBID slotId; // 40
};
RED4EXT_ASSERT_SIZE(DropItemEvent, 0x48);
} // namespace game::events
using gameeventsDropItemEvent = game::events::DropItemEvent;
using gameDropItemEvent = game::events::DropItemEvent;
} // namespace RED4ext

// clang-format on
