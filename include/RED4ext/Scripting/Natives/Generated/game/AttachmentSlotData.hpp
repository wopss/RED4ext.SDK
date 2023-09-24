#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/gameAttachmentSlotData.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(game::AttachmentSlotData, 0x90);
using gameAttachmentSlotData = game::AttachmentSlotData;
using AttachmentSlotData = game::AttachmentSlotData;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { struct ItemObject; }

namespace game
{
struct AttachmentSlotData
{
    static constexpr const char* NAME = "gameAttachmentSlotData";
    static constexpr const char* ALIAS = "AttachmentSlotData";

    TweakDBID slotID; // 00
    Handle<game::ItemObject> itemObject; // 08
    uint8_t unk18[0x28 - 0x18]; // 18
    ItemID activeItemID; // 28
    ItemID prevItemID; // 38
    uint8_t unk48[0x58 - 0x48]; // 48
    ItemID appearanceItemID; // 58
    uint8_t unk68[0x90 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AttachmentSlotData, 0x90);
} // namespace game
using gameAttachmentSlotData = game::AttachmentSlotData;
using AttachmentSlotData = game::AttachmentSlotData;
} // namespace RED4ext
*/

// clang-format on
