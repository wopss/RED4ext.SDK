#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InventoryItemAttachmentType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InventoryItemData.hpp>

namespace RED4ext
{
namespace game { 
struct InventoryItemAttachments : IScriptable
{
    static constexpr const char* NAME = "gameInventoryItemAttachments";
    static constexpr const char* ALIAS = "InventoryItemAttachments";

    TweakDBID SlotID; // 40
    game::InventoryItemData ItemData; // 48
    CString SlotName; // 280
    game::InventoryItemAttachmentType SlotType; // 2A0
    uint8_t unk2A4[0x2A8 - 0x2A4]; // 2A4
};
RED4EXT_ASSERT_SIZE(InventoryItemAttachments, 0x2A8);
} // namespace game
using InventoryItemAttachments = game::InventoryItemAttachments;
} // namespace RED4ext
