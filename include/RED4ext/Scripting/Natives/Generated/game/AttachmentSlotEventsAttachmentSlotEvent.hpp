#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct AttachmentSlotEventsAttachmentSlotEvent : red::Event
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsAttachmentSlotEvent";
    static constexpr const char* ALIAS = "AttachmentSlotEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsAttachmentSlotEvent, 0x48);
} // namespace game
using gameAttachmentSlotEventsAttachmentSlotEvent = game::AttachmentSlotEventsAttachmentSlotEvent;
using AttachmentSlotEvent = game::AttachmentSlotEventsAttachmentSlotEvent;
} // namespace RED4ext

// clang-format on
