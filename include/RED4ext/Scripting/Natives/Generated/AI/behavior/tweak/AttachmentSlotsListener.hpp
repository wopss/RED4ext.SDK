#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttachmentSlotsListener.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct AttachmentSlotsListener : game::IAttachmentSlotsListener
{
    static constexpr const char* NAME = "AIbehaviortweakAttachmentSlotsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x90 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttachmentSlotsListener, 0x90);
} // namespace AI::behavior::tweak
using AIbehaviortweakAttachmentSlotsListener = AI::behavior::tweak::AttachmentSlotsListener;
} // namespace RED4ext

// clang-format on
