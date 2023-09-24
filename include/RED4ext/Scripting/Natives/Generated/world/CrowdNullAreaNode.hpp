#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world
{
struct CrowdNullAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldCrowdNullAreaNode";
    static constexpr const char* ALIAS = NAME;

    bool IsForBlockade; // 60
    bool permanentlyEnabledByDefault; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(CrowdNullAreaNode, 0x68);
} // namespace world
using worldCrowdNullAreaNode = world::CrowdNullAreaNode;
} // namespace RED4ext

// clang-format on
