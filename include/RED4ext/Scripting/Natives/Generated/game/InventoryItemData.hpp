#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InventoryItemAbility.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InventoryItemShape.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/InventoryItemSortData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemIconGender.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootItemType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SItemStackRequirementData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatViewData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DamageType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/EquipmentArea.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ItemType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Quality.hpp>

namespace RED4ext
{
namespace game { struct InventoryItemAttachments; }
namespace game { struct ItemData; }

namespace game
{
struct InventoryItemData
{
    static constexpr const char* NAME = "gameInventoryItemData";
    static constexpr const char* ALIAS = "InventoryItemData";

    ItemID ID; // 00
    TweakDBID SlotID; // 10
    CString Name; // 18
    CName Quality; // 38
    float QualityF; // 40
    int32_t Quantity; // 44
    int32_t Ammo; // 48
    game::InventoryItemShape Shape; // 4C
    game::InventoryItemShape ItemShape; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
    CString IconPath; // 50
    CString CategoryName; // 70
    game::data::ItemType ItemType; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
    CString LocalizedItemType; // 98
    CString Description; // B8
    CString AdditionalDescription; // D8
    CString GameplayDescription; // F8
    float Price; // 118
    float BuyPrice; // 11C
    float UnlockProgress; // 120
    int32_t RequiredLevel; // 124
    int32_t ItemLevel; // 128
    game::data::DamageType DamageType; // 12C
    game::data::EquipmentArea EquipmentArea; // 130
    game::data::Quality ComparedQuality; // 134
    bool Empty; // 138
    bool IsPart; // 139
    bool IsCraftingMaterial; // 13A
    bool IsEquipped; // 13B
    bool IsNew; // 13C
    bool IsAvailable; // 13D
    bool IsVendorItem; // 13E
    bool IsBroken; // 13F
    int32_t SlotIndex; // 140
    uint32_t PositionInBackpack; // 144
    game::ItemIconGender IconGender; // 148
    uint8_t unk149[0x150 - 0x149]; // 149
    WeakHandle<game::ItemData> GameItemData; // 150
    bool HasPlayerSmartGunLink; // 160
    uint8_t unk161[0x164 - 0x161]; // 161
    int32_t PlayerLevel; // 164
    int32_t PlayerStrength; // 168
    int32_t PlayerReflexes; // 16C
    int32_t PlayerStreetCred; // 170
    bool IsRequirementMet; // 174
    bool IsEquippable; // 175
    bool IsVisualsEquipped; // 176
    uint8_t unk177[0x178 - 0x177]; // 177
    game::SItemStackRequirementData Requirement; // 178
    game::SItemStackRequirementData EquipRequirement; // 180
    DynArray<game::SItemStackRequirementData> EquipRequirements; // 188
    game::LootItemType LootItemType; // 198
    uint8_t unk199[0x1A0 - 0x199]; // 199
    DynArray<Handle<game::InventoryItemAttachments>> Attachments; // 1A0
    DynArray<game::InventoryItemAbility> Abilities; // 1B0
    DynArray<TweakDBID> PlacementSlots; // 1C0
    DynArray<game::StatViewData> PrimaryStats; // 1D0
    DynArray<game::StatViewData> SecondaryStats; // 1E0
    game::InventoryItemSortData SortData; // 1F0
    bool IsPerkRequired; // 230
    uint8_t unk231[0x238 - 0x231]; // 231
    CString PerkRequiredName; // 238
    bool IsCrafted; // 258
    bool IsIconic; // 259
    uint8_t unk25A[0x260 - 0x25A]; // 25A
};
RED4EXT_ASSERT_SIZE(InventoryItemData, 0x260);
} // namespace game
using gameInventoryItemData = game::InventoryItemData;
using InventoryItemData = game::InventoryItemData;
} // namespace RED4ext

// clang-format on
