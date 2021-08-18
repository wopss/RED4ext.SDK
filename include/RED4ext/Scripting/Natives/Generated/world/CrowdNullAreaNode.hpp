#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world { 
struct CrowdNullAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldCrowdNullAreaNode";
    static constexpr const char* ALIAS = NAME;

    bool IsForBlockade; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(CrowdNullAreaNode, 0x68);
} // namespace world
} // namespace RED4ext
