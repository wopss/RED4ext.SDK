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

    DynArray<gen::LevelRandomizerEntry> entries; // 230
    uint8_t unk240[0x2A8 - 0x240]; // 240
    uint32_t seed; // 2A8
    gen::LevelRandomizerDataSource dataSource; // 2AC
    CName supervisorType; // 2B0
    bool debugSpawnAll; // 2B8
    uint8_t unk2B9[0x2C0 - 0x2B9]; // 2B9
};
RED4EXT_ASSERT_SIZE(LevelRandomizer, 0x2C0);
} // namespace gen
} // namespace RED4ext
