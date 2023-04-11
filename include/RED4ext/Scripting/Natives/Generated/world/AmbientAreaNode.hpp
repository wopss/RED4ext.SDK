#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct AmbientAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldAmbientAreaNode";
    static constexpr const char* ALIAS = NAME;

    bool useCustomColor; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(AmbientAreaNode, 0x78);
} // namespace world
using worldAmbientAreaNode = world::AmbientAreaNode;
} // namespace RED4ext

// clang-format on
