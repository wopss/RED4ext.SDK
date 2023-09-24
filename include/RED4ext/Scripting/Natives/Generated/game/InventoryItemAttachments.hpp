#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InventoryItemAttachmentType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InventoryItemData.hpp>

namespace RED4ext
{
namespace game
{
struct InventoryItemAttachments : IScriptable
{
    static constexpr const char* NAME = "gameInventoryItemAttachments";
    static constexpr const char* ALIAS = "InventoryItemAttachments";

    TweakDBID SlotID; // 40
    game::InventoryItemData ItemData; // 48
    CString SlotName; // 2A0
    game::InventoryItemAttachmentType SlotType; // 2C0
    uint8_t unk2C4[0x2C8 - 0x2C4]; // 2C4
};
RED4EXT_ASSERT_SIZE(InventoryItemAttachments, 0x2C8);
} // namespace game
using gameInventoryItemAttachments = game::InventoryItemAttachments;
using InventoryItemAttachments = game::InventoryItemAttachments;
} // namespace RED4ext

// clang-format on
