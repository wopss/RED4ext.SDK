#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IVisualizerLogicInterface.hpp>

namespace RED4ext
{
namespace game::interactions::vis { 
struct LootVisualizerLogic : game::interactions::vis::IVisualizerLogicInterface
{
    static constexpr const char* NAME = "gameinteractionsvisLootVisualizerLogic";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x58 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(LootVisualizerLogic, 0x58);
} // namespace game::interactions::vis
} // namespace RED4ext
