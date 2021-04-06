#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct LootContainerBase : game::Object
{
    static constexpr const char* NAME = "gameLootContainerBase";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> lootTables; // 228
    bool useAreaLoot; // 238
    uint8_t unk239[0x23C - 0x239]; // 239
    TweakDBID contentAssignment; // 23C
    bool isIllegal; // 244
    uint8_t unk245[0x248 - 0x245]; // 245
};
RED4EXT_ASSERT_SIZE(LootContainerBase, 0x248);
} // namespace game
} // namespace RED4ext
