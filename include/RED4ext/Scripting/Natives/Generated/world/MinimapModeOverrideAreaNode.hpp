#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabStreamingOcclusion.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world
{
struct MinimapModeOverrideAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldMinimapModeOverrideAreaNode";
    static constexpr const char* ALIAS = NAME;

    world::PrefabStreamingOcclusion streamingOcclusion; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(MinimapModeOverrideAreaNode, 0x78);
} // namespace world
using worldMinimapModeOverrideAreaNode = world::MinimapModeOverrideAreaNode;
} // namespace RED4ext

// clang-format on
