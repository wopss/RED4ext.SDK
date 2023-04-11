#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/gen/LevelRandomizerDataSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/gen/LevelRandomizerEntry.hpp>

namespace RED4ext
{
namespace gen
{
struct LevelRandomizer : game::Object
{
    static constexpr const char* NAME = "genLevelRandomizer";
    static constexpr const char* ALIAS = NAME;

    DynArray<gen::LevelRandomizerEntry> entries; // 240
    uint8_t unk250[0x2B8 - 0x250]; // 250
    uint32_t seed; // 2B8
    gen::LevelRandomizerDataSource dataSource; // 2BC
    CName supervisorType; // 2C0
    bool debugSpawnAll; // 2C8
    uint8_t unk2C9[0x2D0 - 0x2C9]; // 2C9
};
RED4EXT_ASSERT_SIZE(LevelRandomizer, 0x2D0);
} // namespace gen
using genLevelRandomizer = gen::LevelRandomizer;
} // namespace RED4ext

// clang-format on
