#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct ItemObject;

struct AttachmentSlotData
{
    static constexpr const char* NAME = "gameAttachmentSlotData";
    static constexpr const char* ALIAS = "AttachmentSlotData";

    TweakDBID slotID;                    // 00
    Handle<game::ItemObject> itemObject; // 08
    ItemID spawningItemID;               // 18
    ItemID activeItemID;                 // 28
    ItemID prevItemID;                   // 38
    uint8_t unk48[0x58 - 0x48];          // 48
    ItemID appearanceItemID;             // 58
    uint8_t unk68[0x90 - 0x68];          // 68
};
RED4EXT_ASSERT_SIZE(AttachmentSlotData, 0x90);
} // namespace game
using gameAttachmentSlotData = game::AttachmentSlotData;
using AttachmentSlotData = game::AttachmentSlotData;
} // namespace RED4ext
