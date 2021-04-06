#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct LootObject : game::Object
{
    static constexpr const char* NAME = "gameLootObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk228[0x258 - 0x228]; // 228
    TweakDBID lootID; // 258
    uint8_t unk260[0x278 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(LootObject, 0x278);
} // namespace game
} // namespace RED4ext
