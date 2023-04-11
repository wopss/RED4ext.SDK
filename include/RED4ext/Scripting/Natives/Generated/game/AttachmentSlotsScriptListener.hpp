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
struct AttachmentSlotsScriptListener : game::IAttachmentSlotsListener
{
    static constexpr const char* NAME = "gameAttachmentSlotsScriptListener";
    static constexpr const char* ALIAS = "AttachmentSlotsScriptListener";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AttachmentSlotsScriptListener, 0x50);
} // namespace game
using gameAttachmentSlotsScriptListener = game::AttachmentSlotsScriptListener;
using AttachmentSlotsScriptListener = game::AttachmentSlotsScriptListener;
} // namespace RED4ext

// clang-format on
