#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProficiencyType.hpp>

namespace RED4ext
{
namespace quest { 
struct LevelUpData
{
    static constexpr const char* NAME = "questLevelUpData";
    static constexpr const char* ALIAS = "LevelUpData";

    int32_t lvl; // 00
    game::data::ProficiencyType type; // 04
    int32_t perkPoints; // 08
    int32_t attributePoints; // 0C
    bool disableAction; // 10
    uint8_t unk11[0x14 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(LevelUpData, 0x14);
} // namespace quest
using LevelUpData = quest::LevelUpData;
} // namespace RED4ext
