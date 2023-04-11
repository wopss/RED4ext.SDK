#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AttachmentSlotReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct AttachmentSlotsReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameAttachmentSlotsReplicatedState";
    static constexpr const char* ALIAS = NAME;

    uint32_t stateVersion; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
    DynArray<game::AttachmentSlotReplicatedState> slots; // 28
};
RED4EXT_ASSERT_SIZE(AttachmentSlotsReplicatedState, 0x38);
} // namespace game
using gameAttachmentSlotsReplicatedState = game::AttachmentSlotsReplicatedState;
} // namespace RED4ext

// clang-format on
