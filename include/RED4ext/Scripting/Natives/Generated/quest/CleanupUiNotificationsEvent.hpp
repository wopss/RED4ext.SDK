#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest
{
struct CleanupUiNotificationsEvent : red::Event
{
    static constexpr const char* NAME = "questCleanupUiNotificationsEvent";
    static constexpr const char* ALIAS = "CleanupUiNotificationsEvent";

};
RED4EXT_ASSERT_SIZE(CleanupUiNotificationsEvent, 0x40);
} // namespace quest
using questCleanupUiNotificationsEvent = quest::CleanupUiNotificationsEvent;
using CleanupUiNotificationsEvent = quest::CleanupUiNotificationsEvent;
} // namespace RED4ext

// clang-format on
