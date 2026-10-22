#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct ItemObject; }

namespace game
{
struct AttachmentSlotEventsPartRemovedFromSlotEvent : red::Event
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsPartRemovedFromSlotEvent";
    static constexpr const char* ALIAS = "PartRemovedFromSlotEvent";

    WeakHandle<game::ItemObject> item; // 40
    ItemID removedPartID; // 50
    TweakDBID slotID; // 60
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsPartRemovedFromSlotEvent, 0x68);
} // namespace game
using gameAttachmentSlotEventsPartRemovedFromSlotEvent = game::AttachmentSlotEventsPartRemovedFromSlotEvent;
using PartRemovedFromSlotEvent = game::AttachmentSlotEventsPartRemovedFromSlotEvent;
} // namespace RED4ext

// clang-format on
