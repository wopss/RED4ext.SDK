#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstanceRegistry.hpp>

namespace RED4ext
{
namespace world
{
struct NodeInstanceRegistry : world::INodeInstanceRegistry
{
    static constexpr const char* NAME = "worldNodeInstanceRegistry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x60100 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NodeInstanceRegistry, 0x60100);
} // namespace world
using worldNodeInstanceRegistry = world::NodeInstanceRegistry;
} // namespace RED4ext

// clang-format on
