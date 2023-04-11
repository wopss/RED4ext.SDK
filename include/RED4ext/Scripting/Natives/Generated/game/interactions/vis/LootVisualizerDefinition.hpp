#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IVisualizerDefinition.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct LootVisualizerDefinition : game::interactions::vis::IVisualizerDefinition
{
    static constexpr const char* NAME = "gameinteractionsvisLootVisualizerDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LootVisualizerDefinition, 0x48);
} // namespace game::interactions::vis
using gameinteractionsvisLootVisualizerDefinition = game::interactions::vis::LootVisualizerDefinition;
} // namespace RED4ext

// clang-format on
