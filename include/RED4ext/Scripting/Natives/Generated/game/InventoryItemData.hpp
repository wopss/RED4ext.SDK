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

namespace game { 
struct InventoryItemData
{
    static constexpr const char* NAME = "gameInventoryItemData";
    static constexpr const char* ALIAS = "InventoryItemData";

    ItemID ID; // 00
    TweakDBID SlotID; // 10
    CString Name; // 18
    CName Quality; // 38
    int32_t Quantity; // 40
    int32_t Ammo; // 44
    game::InventoryItemShape Shape; // 48
    game::InventoryItemShape ItemShape; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    CString IconPath; // 50
    CString CategoryName; // 70
    game::data::ItemType ItemType; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
    CString LocalizedItemType; // 98
    CString Description; // B8
    CString AdditionalDescription; // D8
    float Price; // F8
    float BuyPrice; // FC
    float UnlockProgress; // 100
    int32_t RequiredLevel; // 104
    int32_t ItemLevel; // 108
    game::data::DamageType DamageType; // 10C
    game::data::EquipmentArea EquipmentArea; // 110
    game::data::Quality ComparedQuality; // 114
    bool Empty; // 118
    bool IsPart; // 119
    bool IsCraftingMaterial; // 11A
    bool IsEquipped; // 11B
    bool IsNew; // 11C
    bool IsAvailable; // 11D
    bool IsVendorItem; // 11E
    bool IsBroken; // 11F
    int32_t SlotIndex; // 120
    uint32_t PositionInBackpack; // 124
    game::ItemIconGender IconGender; // 128
    uint8_t unk129[0x130 - 0x129]; // 129
    WeakHandle<game::ItemData> GameItemData; // 130
    bool HasPlayerSmartGunLink; // 140
    uint8_t unk141[0x144 - 0x141]; // 141
    int32_t PlayerLevel; // 144
    int32_t PlayerStrength; // 148
    int32_t PlayerReflexes; // 14C
    int32_t PlayerStreetCred; // 150
    bool IsRequirementMet; // 154
    bool IsEquippable; // 155
    bool IsVisualsEquipped; // 156
    uint8_t unk157[0x158 - 0x157]; // 157
    game::SItemStackRequirementData Requirement; // 158
    game::SItemStackRequirementData EquipRequirement; // 160
    DynArray<game::SItemStackRequirementData> EquipRequirements; // 168
    game::LootItemType LootItemType; // 178
    uint8_t unk179[0x180 - 0x179]; // 179
    DynArray<Handle<game::InventoryItemAttachments>> Attachments; // 180
    DynArray<game::InventoryItemAbility> Abilities; // 190
    DynArray<TweakDBID> PlacementSlots; // 1A0
    DynArray<game::StatViewData> PrimaryStats; // 1B0
    DynArray<game::StatViewData> SecondaryStats; // 1C0
    game::InventoryItemSortData SortData; // 1D0
    bool IsPerkRequired; // 208
    uint8_t unk209[0x210 - 0x209]; // 209
    CString PerkRequiredName; // 210
    bool IsCrafted; // 230
    uint8_t unk231[0x238 - 0x231]; // 231
};
RED4EXT_ASSERT_SIZE(InventoryItemData, 0x238);
} // namespace game
using InventoryItemData = game::InventoryItemData;
} // namespace RED4ext

// clang-format on
