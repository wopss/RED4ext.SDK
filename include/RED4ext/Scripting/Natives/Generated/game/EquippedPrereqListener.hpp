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
struct EquippedPrereqListener : game::IAttachmentSlotsListener
{
    static constexpr const char* NAME = "gameEquippedPrereqListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(EquippedPrereqListener, 0x50);
} // namespace game
using gameEquippedPrereqListener = game::EquippedPrereqListener;
} // namespace RED4ext

// clang-format on
