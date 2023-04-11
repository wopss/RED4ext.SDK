#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AttachmentSlotEventsAttachmentSlotEvent.hpp>

namespace RED4ext
{
namespace game
{
struct AttachmentSlotEventsItemEquippedInSlot : game::AttachmentSlotEventsAttachmentSlotEvent
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsItemEquippedInSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsItemEquippedInSlot, 0x58);
} // namespace game
using gameAttachmentSlotEventsItemEquippedInSlot = game::AttachmentSlotEventsItemEquippedInSlot;
} // namespace RED4ext

// clang-format on
