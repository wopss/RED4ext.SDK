#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabMetadata.hpp>

namespace RED4ext
{
namespace game
{
struct LocationPrefabMetadata : world::PrefabMetadata
{
    static constexpr const char* NAME = "gameLocationPrefabMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> tags; // 40
    bool ignoreParentPrefabs; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(LocationPrefabMetadata, 0x58);
} // namespace game
using gameLocationPrefabMetadata = game::LocationPrefabMetadata;
} // namespace RED4ext

// clang-format on
