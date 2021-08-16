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

    DynArray<TweakDBID> lootTables; // 230
    bool useAreaLoot; // 240
    uint8_t unk241[0x244 - 0x241]; // 241
    TweakDBID contentAssignment; // 244
    bool isIllegal; // 24C
    uint8_t unk24D[0x250 - 0x24D]; // 24D
};
RED4EXT_ASSERT_SIZE(LootContainerBase, 0x250);
} // namespace game
} // namespace RED4ext
