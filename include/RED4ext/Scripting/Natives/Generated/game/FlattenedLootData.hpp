#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct FlattenedLootData
{
    static constexpr const char* NAME = "gameFlattenedLootData";
    static constexpr const char* ALIAS = NAME;

    TweakDBID lootID; // 00
    uint8_t unk08[0x18 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(FlattenedLootData, 0x18);
} // namespace game
} // namespace RED4ext
