#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttachmentSlotsListener.hpp>

namespace RED4ext
{
namespace game::playeractions
{
struct AttachSlotListener : game::IAttachmentSlotsListener
{
    static constexpr const char* NAME = "gameplayeractionsAttachSlotListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xC0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttachSlotListener, 0xC0);
} // namespace game::playeractions
using gameplayeractionsAttachSlotListener = game::playeractions::AttachSlotListener;
} // namespace RED4ext

// clang-format on
