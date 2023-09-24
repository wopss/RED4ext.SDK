#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct SuggestedDefenseValues
{
    static constexpr const char* NAME = "gameSuggestedDefenseValues";
    static constexpr const char* ALIAS = NAME;

    float minArmor; // 00
    float maxArmor; // 04
    float minProtection; // 08
    float maxProtection; // 0C
};
RED4EXT_ASSERT_SIZE(SuggestedDefenseValues, 0x10);
} // namespace game
using gameSuggestedDefenseValues = game::SuggestedDefenseValues;
} // namespace RED4ext

// clang-format on
