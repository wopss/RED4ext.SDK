#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/FamilyBase.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct LootVisualizerFamily : game::interactions::vis::FamilyBase
{
    static constexpr const char* NAME = "gameinteractionsvisLootVisualizerFamily";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk20[0x38 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(LootVisualizerFamily, 0x38);
} // namespace game::interactions::vis
using gameinteractionsvisLootVisualizerFamily = game::interactions::vis::LootVisualizerFamily;
} // namespace RED4ext

// clang-format on
