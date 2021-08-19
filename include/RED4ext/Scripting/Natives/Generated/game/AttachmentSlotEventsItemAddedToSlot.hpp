#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct AttachmentSlotEventsItemAddedToSlot : red::Event
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsItemAddedToSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsItemAddedToSlot, 0x68);
} // namespace game
} // namespace RED4ext
