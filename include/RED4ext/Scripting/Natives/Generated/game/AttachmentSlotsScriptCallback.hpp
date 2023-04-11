#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct AttachmentSlotsScriptCallback : IScriptable
{
    static constexpr const char* NAME = "gameAttachmentSlotsScriptCallback";
    static constexpr const char* ALIAS = "AttachmentSlotsScriptCallback";

    TweakDBID slotID; // 40
    ItemID itemID; // 48
};
RED4EXT_ASSERT_SIZE(AttachmentSlotsScriptCallback, 0x58);
} // namespace game
using gameAttachmentSlotsScriptCallback = game::AttachmentSlotsScriptCallback;
using AttachmentSlotsScriptCallback = game::AttachmentSlotsScriptCallback;
} // namespace RED4ext

// clang-format on
