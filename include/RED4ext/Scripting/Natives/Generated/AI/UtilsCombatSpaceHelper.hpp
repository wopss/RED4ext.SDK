#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct UtilsCombatSpaceHelper
{
    static constexpr const char* NAME = "AIUtilsCombatSpaceHelper";
    static constexpr const char* ALIAS = "CombatSpaceHelper";

    uint8_t unk00[0x1 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(UtilsCombatSpaceHelper, 0x1);
} // namespace AI
using AIUtilsCombatSpaceHelper = AI::UtilsCombatSpaceHelper;
using CombatSpaceHelper = AI::UtilsCombatSpaceHelper;
} // namespace RED4ext

// clang-format on
