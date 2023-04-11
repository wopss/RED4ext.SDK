#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct NotifyItemEquippedEvent : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsNotifyItemEquippedEvent";
    static constexpr const char* ALIAS = "AudioNotifyItemEquippedEvent";

    CName itemName; // 40
};
RED4EXT_ASSERT_SIZE(NotifyItemEquippedEvent, 0x48);
} // namespace game::audio::events
using gameaudioeventsNotifyItemEquippedEvent = game::audio::events::NotifyItemEquippedEvent;
using AudioNotifyItemEquippedEvent = game::audio::events::NotifyItemEquippedEvent;
} // namespace RED4ext

// clang-format on
