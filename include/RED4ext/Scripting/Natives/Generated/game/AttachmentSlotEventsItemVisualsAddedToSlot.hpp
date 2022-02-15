#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AttachmentSlotEventsItemAddedToSlotBase.hpp>

namespace RED4ext
{
namespace game { 
struct AttachmentSlotEventsItemVisualsAddedToSlot : game::AttachmentSlotEventsItemAddedToSlotBase
{
    static constexpr const char* NAME = "gameAttachmentSlotEventsItemVisualsAddedToSlot";
    static constexpr const char* ALIAS = "ItemVisualsAddedToSlot";

};
RED4EXT_ASSERT_SIZE(AttachmentSlotEventsItemVisualsAddedToSlot, 0x68);
} // namespace game
using ItemVisualsAddedToSlot = game::AttachmentSlotEventsItemVisualsAddedToSlot;
} // namespace RED4ext
