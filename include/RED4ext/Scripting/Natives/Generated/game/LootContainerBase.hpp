#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ContainerType.hpp>

namespace RED4ext
{
namespace game
{
struct LootContainerBase : game::Object
{
    static constexpr const char* NAME = "gameLootContainerBase";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> lootTables; // 240
    bool useAreaLoot; // 250
    uint8_t unk251[0x254 - 0x251]; // 251
    TweakDBID contentAssignment; // 254
    bool isIllegal; // 25C
    uint8_t unk25D[0x260 - 0x25D]; // 25D
    game::data::ContainerType containerType; // 260
    bool wasLootInitalized; // 264
    uint8_t unk265[0x268 - 0x265]; // 265
};
RED4EXT_ASSERT_SIZE(LootContainerBase, 0x268);
} // namespace game
using gameLootContainerBase = game::LootContainerBase;
} // namespace RED4ext

// clang-format on
