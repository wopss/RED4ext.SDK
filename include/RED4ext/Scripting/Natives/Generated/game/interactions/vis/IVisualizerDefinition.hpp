#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/EVisualizerDefinitionFlags.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct IVisualizerDefinition : ISerializable
{
    static constexpr const char* NAME = "gameinteractionsvisIVisualizerDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
    game::interactions::vis::EVisualizerDefinitionFlags flags; // 40
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(IVisualizerDefinition, 0x48);
} // namespace game::interactions::vis
using gameinteractionsvisIVisualizerDefinition = game::interactions::vis::IVisualizerDefinition;
} // namespace RED4ext

// clang-format on
