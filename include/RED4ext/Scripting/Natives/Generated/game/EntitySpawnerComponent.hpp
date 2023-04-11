#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntitySpawnerSlotData.hpp>

namespace RED4ext
{
namespace game
{
struct EntitySpawnerComponent : game::Component
{
    static constexpr const char* NAME = "gameEntitySpawnerComponent";
    static constexpr const char* ALIAS = "EntitySpawnerComponent";

    uint8_t unkA8[0x110 - 0xA8]; // A8
    DynArray<game::EntitySpawnerSlotData> slotDataArray; // 110
};
RED4EXT_ASSERT_SIZE(EntitySpawnerComponent, 0x120);
} // namespace game
using gameEntitySpawnerComponent = game::EntitySpawnerComponent;
using EntitySpawnerComponent = game::EntitySpawnerComponent;
} // namespace RED4ext

// clang-format on
