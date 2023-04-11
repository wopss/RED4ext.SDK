#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabMetadata.hpp>

namespace RED4ext
{
namespace game
{
struct LootPrefabMetadata : world::PrefabMetadata
{
    static constexpr const char* NAME = "gameLootPrefabMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> lootTableTDBIDs; // 40
    bool ignoreParentPrefabs; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    TweakDBID contentAssignment; // 54
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(LootPrefabMetadata, 0x60);
} // namespace game
using gameLootPrefabMetadata = game::LootPrefabMetadata;
} // namespace RED4ext

// clang-format on
