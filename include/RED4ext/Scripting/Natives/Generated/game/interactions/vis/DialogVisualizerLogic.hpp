#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IGroupedVisualizerLogic.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct DialogVisualizerLogic : game::interactions::vis::IGroupedVisualizerLogic
{
    static constexpr const char* NAME = "gameinteractionsvisDialogVisualizerLogic";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x58 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(DialogVisualizerLogic, 0x58);
} // namespace game::interactions::vis
using gameinteractionsvisDialogVisualizerLogic = game::interactions::vis::DialogVisualizerLogic;
} // namespace RED4ext

// clang-format on
