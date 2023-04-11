#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct EntitySpawnerSlotData
{
    static constexpr const char* NAME = "gameEntitySpawnerSlotData";
    static constexpr const char* ALIAS = "EntitySpawnerSlotData";

    CName slotName; // 00
    TweakDBID spawnableObject; // 08
    uint8_t unk10[0x28 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(EntitySpawnerSlotData, 0x28);
} // namespace game
using gameEntitySpawnerSlotData = game::EntitySpawnerSlotData;
using EntitySpawnerSlotData = game::EntitySpawnerSlotData;
} // namespace RED4ext

// clang-format on
