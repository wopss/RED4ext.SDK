#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttachmentSlotsListener.hpp>

namespace RED4ext
{
namespace game
{
struct TPPRepresentationSlotListener : game::IAttachmentSlotsListener
{
    static constexpr const char* NAME = "gameTPPRepresentationSlotListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TPPRepresentationSlotListener, 0x48);
} // namespace game
using gameTPPRepresentationSlotListener = game::TPPRepresentationSlotListener;
} // namespace RED4ext

// clang-format on
