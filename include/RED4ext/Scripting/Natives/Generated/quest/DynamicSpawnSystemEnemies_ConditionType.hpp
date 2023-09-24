#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDistanceConditionType.hpp>

namespace RED4ext
{
namespace quest { struct DynamicSpawnSystemEnemyDistance; }
namespace quest { struct ValueDistance; }

namespace quest
{
struct DynamicSpawnSystemEnemies_ConditionType : quest::IDistanceConditionType
{
    static constexpr const char* NAME = "questDynamicSpawnSystemEnemies_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::DynamicSpawnSystemEnemyDistance> distanceDefinition1; // 38
    Handle<quest::ValueDistance> distanceDefinition2; // 48
    EComparisonType comparisonType; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(DynamicSpawnSystemEnemies_ConditionType, 0x60);
} // namespace quest
using questDynamicSpawnSystemEnemies_ConditionType = quest::DynamicSpawnSystemEnemies_ConditionType;
} // namespace RED4ext

// clang-format on
