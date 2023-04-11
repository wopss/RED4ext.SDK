#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/graph/GraphNodeDefinition.hpp>

namespace RED4ext
{
namespace quest
{
struct NodeDefinition : graph::GraphNodeDefinition
{
    static constexpr const char* NAME = "questNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    uint16_t id; // 40
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(NodeDefinition, 0x48);
} // namespace quest
using questNodeDefinition = quest::NodeDefinition;
} // namespace RED4ext

// clang-format on
