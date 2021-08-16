#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttachmentSlotsListener.hpp>

namespace RED4ext
{
namespace game { 
struct AttachmentSlotsFunctorListener : game::IAttachmentSlotsListener
{
    static constexpr const char* NAME = "gameAttachmentSlotsFunctorListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttachmentSlotsFunctorListener, 0x70);
} // namespace game
} // namespace RED4ext
