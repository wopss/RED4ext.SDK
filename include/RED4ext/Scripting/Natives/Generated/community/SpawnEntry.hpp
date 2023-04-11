#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SpawnInViewState.hpp>

namespace RED4ext
{
namespace community { struct SpawnInitializer; }
namespace community { struct SpawnPhase; }

namespace community
{
struct SpawnEntry : ISerializable
{
    static constexpr const char* NAME = "communitySpawnEntry";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<community::SpawnPhase>> phases; // 30
    DynArray<Handle<community::SpawnInitializer>> initializers; // 40
    CName entryName; // 50
    TweakDBID characterRecordId; // 58
    game::SpawnInViewState spawnInView; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(SpawnEntry, 0x68);
} // namespace community
using communitySpawnEntry = community::SpawnEntry;
} // namespace RED4ext

// clang-format on
