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
struct AttachmentSlotEventsUnequipEnd : game::AttachmentSlotEventsAttachmentSlotEvent
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsUnequipEnd";
    static constexpr const char* ALIAS = "UnequipEnd";

};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsUnequipEnd, 0x48);
} // namespace game
using gameAttachmentSlotEventsUnequipEnd = game::AttachmentSlotEventsUnequipEnd;
using UnequipEnd = game::AttachmentSlotEventsUnequipEnd;
} // namespace RED4ext

// clang-format on
