#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace world { 
struct AIDirectorSpawnAreaNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "worldAIDirectorSpawnAreaNode";
    static constexpr const char* ALIAS = NAME;

    CName groupKey; // 60
};
RED4EXT_ASSERT_SIZE(AIDirectorSpawnAreaNode, 0x68);
} // namespace world
} // namespace RED4ext
