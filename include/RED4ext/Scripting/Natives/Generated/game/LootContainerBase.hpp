#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct LootContainerBase : game::Object
{
    static constexpr const char* NAME = "gameLootContainerBase";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> lootTables; // 240
    bool useAreaLoot; // 250
    uint8_t unk251[0x254 - 0x251]; // 251
    TweakDBID contentAssignment; // 254
    bool isIllegal; // 25C
    bool wasLootInitalized; // 25D
    uint8_t unk25E[0x260 - 0x25E]; // 25E
};
RED4EXT_ASSERT_SIZE(LootContainerBase, 0x260);
} // namespace game
} // namespace RED4ext
