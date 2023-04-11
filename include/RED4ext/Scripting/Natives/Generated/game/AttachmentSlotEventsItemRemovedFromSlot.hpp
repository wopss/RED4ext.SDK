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
struct AttachmentSlotEventsItemRemovedFromSlot : red::Event
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsItemRemovedFromSlot";
    static constexpr const char* ALIAS = "ItemRemovedFromSlot";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsItemRemovedFromSlot, 0x58);
} // namespace game
using gameAttachmentSlotEventsItemRemovedFromSlot = game::AttachmentSlotEventsItemRemovedFromSlot;
using ItemRemovedFromSlot = game::AttachmentSlotEventsItemRemovedFromSlot;
} // namespace RED4ext

// clang-format on
