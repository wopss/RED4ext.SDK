#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink { struct HudEntriesResource; }

namespace ink
{
struct RequestNewHudEvent : red::Event
{
    static constexpr const char* NAME = "inkRequestNewHudEvent";
    static constexpr const char* ALIAS = "RequestNewHudEvent";

    Ref<ink::HudEntriesResource> entriesResource; // 40
};
RED4EXT_ASSERT_SIZE(RequestNewHudEvent, 0x58);
} // namespace ink
using inkRequestNewHudEvent = ink::RequestNewHudEvent;
using RequestNewHudEvent = ink::RequestNewHudEvent;
} // namespace RED4ext

// clang-format on
