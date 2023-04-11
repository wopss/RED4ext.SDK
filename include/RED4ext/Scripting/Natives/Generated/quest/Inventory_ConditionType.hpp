#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IObjectConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct Inventory_ConditionType : quest::IObjectConditionType
{
    static constexpr const char* NAME = "questInventory_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 38
    bool isPlayer; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    TweakDBID itemID; // 74
    uint8_t unk7C[0x80 - 0x7C]; // 7C
    CName itemTag; // 80
    uint32_t quantity; // 88
    EComparisonType comparisonType; // 8C
};
RED4EXT_ASSERT_SIZE(Inventory_ConditionType, 0x90);
} // namespace quest
using questInventory_ConditionType = quest::Inventory_ConditionType;
} // namespace RED4ext

// clang-format on
