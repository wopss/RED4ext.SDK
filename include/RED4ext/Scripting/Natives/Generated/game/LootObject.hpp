#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct LootObject : game::Object
{
    static constexpr const char* NAME = "gameLootObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x260 - 0x230]; // 230
    TweakDBID lootID; // 260
    uint8_t unk268[0x280 - 0x268]; // 268
};
RED4EXT_ASSERT_SIZE(LootObject, 0x280);
} // namespace game
} // namespace RED4ext
