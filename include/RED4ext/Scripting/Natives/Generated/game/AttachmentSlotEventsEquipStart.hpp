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
struct AttachmentSlotEventsEquipStart : game::AttachmentSlotEventsAttachmentSlotEvent
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsEquipStart";
    static constexpr const char* ALIAS = "EquipStart";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsEquipStart, 0x60);
} // namespace game
using gameAttachmentSlotEventsEquipStart = game::AttachmentSlotEventsEquipStart;
using EquipStart = game::AttachmentSlotEventsEquipStart;
} // namespace RED4ext

// clang-format on
