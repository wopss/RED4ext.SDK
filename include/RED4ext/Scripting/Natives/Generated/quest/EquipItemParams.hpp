#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemEquipContexts.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemUnequipContexts.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EquipItemParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questEquipItemParams";
    static constexpr const char* ALIAS = NAME;

    quest::NodeType type; // 40
    TweakDBID slotId; // 44
    TweakDBID itemId; // 4C
    bool failIfItemNotFound; // 54
    bool instant; // 55
    bool equipLastWeapon; // 56
    bool forceFirstEquip; // 57
    float equipDurationOverride; // 58
    float unequipDurationOverride; // 5C
    bool ignoreStateMachine; // 60
    bool isPlayer; // 61
    bool byItem; // 62
    uint8_t unk63[0x64 - 0x63]; // 63
    game::ItemEquipContexts equipTypes; // 64
    game::ItemUnequipContexts unequipTypes; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(EquipItemParams, 0x70);
} // namespace quest
using questEquipItemParams = quest::EquipItemParams;
} // namespace RED4ext

// clang-format on
