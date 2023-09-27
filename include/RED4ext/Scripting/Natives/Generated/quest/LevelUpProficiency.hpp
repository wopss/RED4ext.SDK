#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProficiencyType.hpp>

namespace RED4ext
{
namespace quest
{
struct LevelUpProficiency : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "questLevelUpProficiency";
    static constexpr const char* ALIAS = "LevelUpProficiency";

    game::data::ProficiencyType proficiencyType; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(LevelUpProficiency, 0x60);
} // namespace quest
using questLevelUpProficiency = quest::LevelUpProficiency;
using LevelUpProficiency = quest::LevelUpProficiency;
} // namespace RED4ext

// clang-format on
