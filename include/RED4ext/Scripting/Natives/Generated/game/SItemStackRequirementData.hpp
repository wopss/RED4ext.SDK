#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatType.hpp>

namespace RED4ext
{
namespace game
{
struct SItemStackRequirementData
{
    static constexpr const char* NAME = "gameSItemStackRequirementData";
    static constexpr const char* ALIAS = "SItemStackRequirementData";

    game::data::StatType statType; // 00
    float requiredValue; // 04
};
RED4EXT_ASSERT_SIZE(SItemStackRequirementData, 0x8);
} // namespace game
using gameSItemStackRequirementData = game::SItemStackRequirementData;
using SItemStackRequirementData = game::SItemStackRequirementData;
} // namespace RED4ext

// clang-format on
