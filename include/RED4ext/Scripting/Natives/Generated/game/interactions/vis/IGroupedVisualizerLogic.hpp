#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IVisualizerLogicInterface.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct IGroupedVisualizerLogic : game::interactions::vis::IVisualizerLogicInterface
{
    static constexpr const char* NAME = "gameinteractionsvisIGroupedVisualizerLogic";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IGroupedVisualizerLogic, 0x30);
} // namespace game::interactions::vis
using gameinteractionsvisIGroupedVisualizerLogic = game::interactions::vis::IGroupedVisualizerLogic;
} // namespace RED4ext

// clang-format on
