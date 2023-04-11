#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct AttachmentSlotEventsPartAddedToSlotEvent : red::Event
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsPartAddedToSlotEvent";
    static constexpr const char* ALIAS = "PartAddedToSlotEvent";

    ItemID itemID; // 40
    ItemID partID; // 50
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsPartAddedToSlotEvent, 0x60);
} // namespace game
using gameAttachmentSlotEventsPartAddedToSlotEvent = game::AttachmentSlotEventsPartAddedToSlotEvent;
using PartAddedToSlotEvent = game::AttachmentSlotEventsPartAddedToSlotEvent;
} // namespace RED4ext

// clang-format on
