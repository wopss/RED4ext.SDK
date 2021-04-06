#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>
#include <RED4ext/Types/generated/gen/LevelRandomizerDataSource.hpp>
#include <RED4ext/Types/generated/gen/LevelRandomizerEntry.hpp>

namespace RED4ext
{
namespace gen { 
struct LevelRandomizer : game::Object
{
    static constexpr const char* NAME = "genLevelRandomizer";
    static constexpr const char* ALIAS = NAME;

    DynArray<gen::LevelRandomizerEntry> entries; // 228
    uint8_t unk238[0x2A0 - 0x238]; // 238
    uint32_t seed; // 2A0
    gen::LevelRandomizerDataSource dataSource; // 2A4
    CName supervisorType; // 2A8
    bool debugSpawnAll; // 2B0
    uint8_t unk2B1[0x2B8 - 0x2B1]; // 2B1
};
RED4EXT_ASSERT_SIZE(LevelRandomizer, 0x2B8);
} // namespace gen
} // namespace RED4ext
