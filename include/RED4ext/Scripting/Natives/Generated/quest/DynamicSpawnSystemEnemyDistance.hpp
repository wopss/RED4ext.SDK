#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DistanceType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDistance.hpp>

namespace RED4ext
{
namespace quest
{
struct DynamicSpawnSystemEnemyDistance : quest::IDistance
{
    static constexpr const char* NAME = "questDynamicSpawnSystemEnemyDistance";
    static constexpr const char* ALIAS = NAME;

    CName waveTag; // 30
    bool checkAllEnemies; // 38
    uint8_t unk39[0x3C - 0x39]; // 39
    quest::DistanceType distanceType; // 3C
};
RED4EXT_ASSERT_SIZE(DynamicSpawnSystemEnemyDistance, 0x40);
} // namespace quest
using questDynamicSpawnSystemEnemyDistance = quest::DynamicSpawnSystemEnemyDistance;
} // namespace RED4ext

// clang-format on
