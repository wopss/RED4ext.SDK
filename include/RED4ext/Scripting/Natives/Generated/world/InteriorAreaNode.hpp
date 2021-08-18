#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNode.hpp>

namespace RED4ext
{
namespace world { 
struct InteriorAreaNode : world::TriggerAreaNode
{
    static constexpr const char* NAME = "worldInteriorAreaNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InteriorAreaNode, 0x70);
} // namespace world
} // namespace RED4ext
