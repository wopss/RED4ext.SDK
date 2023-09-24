#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProficiencyType.hpp>

namespace RED4ext
{
namespace quest
{
struct LevelUpData
{
    static constexpr const char* NAME = "questLevelUpData";
    static constexpr const char* ALIAS = "LevelUpData";

    int32_t lvl; // 00
    game::data::ProficiencyType type; // 04
    int32_t perkPoints; // 08
    int32_t attributePoints; // 0C
    int32_t espionagePoints; // 10
    bool disableAction; // 14
    uint8_t unk15[0x18 - 0x15]; // 15
};
RED4EXT_ASSERT_SIZE(LevelUpData, 0x18);
} // namespace quest
using questLevelUpData = quest::LevelUpData;
using LevelUpData = quest::LevelUpData;
} // namespace RED4ext

// clang-format on
