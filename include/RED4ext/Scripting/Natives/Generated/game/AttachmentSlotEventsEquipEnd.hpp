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
struct AttachmentSlotEventsEquipEnd : game::AttachmentSlotEventsAttachmentSlotEvent
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsEquipEnd";
    static constexpr const char* ALIAS = "EquipEnd";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsEquipEnd, 0x58);
} // namespace game
using gameAttachmentSlotEventsEquipEnd = game::AttachmentSlotEventsEquipEnd;
using EquipEnd = game::AttachmentSlotEventsEquipEnd;
} // namespace RED4ext

// clang-format on
