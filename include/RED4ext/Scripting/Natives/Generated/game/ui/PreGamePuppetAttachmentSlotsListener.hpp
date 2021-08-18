#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttachmentSlotsListener.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PreGamePuppetAttachmentSlotsListener : game::IAttachmentSlotsListener
{
    static constexpr const char* NAME = "gameuiPreGamePuppetAttachmentSlotsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PreGamePuppetAttachmentSlotsListener, 0x60);
} // namespace game::ui
} // namespace RED4ext
