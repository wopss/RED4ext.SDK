#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct LootObject : game::Object
{
    static constexpr const char* NAME = "gameLootObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x270 - 0x240]; // 240
    TweakDBID lootID; // 270
    uint8_t unk278[0x290 - 0x278]; // 278
};
RED4EXT_ASSERT_SIZE(LootObject, 0x290);
} // namespace game
using gameLootObject = game::LootObject;
} // namespace RED4ext

// clang-format on
