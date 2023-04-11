#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct EnableClientSideInteractionEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsEnableClientSideInteractionEvent";
    static constexpr const char* ALIAS = "EnableClientSideInteractionEvent";

};
RED4EXT_ASSERT_SIZE(EnableClientSideInteractionEvent, 0x40);
} // namespace game::interactions
using gameinteractionsEnableClientSideInteractionEvent = game::interactions::EnableClientSideInteractionEvent;
using EnableClientSideInteractionEvent = game::interactions::EnableClientSideInteractionEvent;
} // namespace RED4ext

// clang-format on
