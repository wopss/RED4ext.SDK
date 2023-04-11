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
struct AttachmentSlotEventsUnequipStart : game::AttachmentSlotEventsAttachmentSlotEvent
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsUnequipStart";
    static constexpr const char* ALIAS = "UnequipStart";

};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsUnequipStart, 0x48);
} // namespace game
using gameAttachmentSlotEventsUnequipStart = game::AttachmentSlotEventsUnequipStart;
using UnequipStart = game::AttachmentSlotEventsUnequipStart;
} // namespace RED4ext

// clang-format on
