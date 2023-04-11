#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct AttachmentSlotReplicatedState
{
    static constexpr const char* NAME = "gameAttachmentSlotReplicatedState";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotID; // 00
    ItemID activeItemID; // 08
    bool hasItemObject; // 18
    uint8_t unk19[0x1C - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(AttachmentSlotReplicatedState, 0x1C);
} // namespace game
using gameAttachmentSlotReplicatedState = game::AttachmentSlotReplicatedState;
} // namespace RED4ext

// clang-format on
