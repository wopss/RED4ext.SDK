#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/NodeDefinition.hpp>

namespace RED4ext
{
namespace game::interactions { struct CHotSpotLayerDefinition; }
namespace game::interactions::vis { struct IVisualizerDefinition; }

namespace game::interactions
{
struct CLinkedLayersDefinition : game::interactions::NodeDefinition
{
    static constexpr const char* NAME = "gameinteractionsCLinkedLayersDefinition";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 48
    DynArray<Handle<game::interactions::CHotSpotLayerDefinition>> layersDefinitions; // 50
    uint8_t unk60[0x70 - 0x60]; // 60
    Handle<game::interactions::vis::IVisualizerDefinition> visualizerDefinition; // 70
};
RED4EXT_ASSERT_SIZE(CLinkedLayersDefinition, 0x80);
} // namespace game::interactions
using gameinteractionsCLinkedLayersDefinition = game::interactions::CLinkedLayersDefinition;
} // namespace RED4ext

// clang-format on
