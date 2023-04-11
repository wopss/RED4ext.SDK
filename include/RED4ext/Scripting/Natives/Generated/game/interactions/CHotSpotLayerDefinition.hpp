#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/EGroupType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/NodeDefinition.hpp>

namespace RED4ext
{
namespace game::interactions { struct CHotSpotAreaFilterDefinition; }
namespace game::interactions { struct CHotSpotGameLogicFilterDefinition; }

namespace game::interactions
{
struct CHotSpotLayerDefinition : game::interactions::NodeDefinition
{
    static constexpr const char* NAME = "gameinteractionsCHotSpotLayerDefinition";
    static constexpr const char* ALIAS = "HotSpotLayerDefinition";

    CName tag; // 48
    bool enabled; // 50
    uint8_t unk51[0x54 - 0x51]; // 51
    game::interactions::EGroupType group; // 54
    float priorityMultiplier; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    Handle<game::interactions::CHotSpotAreaFilterDefinition> areaFilterDefinition; // 60
    Handle<game::interactions::CHotSpotGameLogicFilterDefinition> gameLogicFilterDefinition; // 70
    uint8_t unk80[0x90 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(CHotSpotLayerDefinition, 0x90);
} // namespace game::interactions
using gameinteractionsCHotSpotLayerDefinition = game::interactions::CHotSpotLayerDefinition;
using HotSpotLayerDefinition = game::interactions::CHotSpotLayerDefinition;
} // namespace RED4ext

// clang-format on
