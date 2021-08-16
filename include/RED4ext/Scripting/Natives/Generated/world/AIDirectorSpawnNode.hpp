#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace world { 
struct AIDirectorSpawnNode : world::Node
{
    static constexpr const char* NAME = "worldAIDirectorSpawnNode";
    static constexpr const char* ALIAS = NAME;

    red::TagList tags; // 38
};
RED4EXT_ASSERT_SIZE(AIDirectorSpawnNode, 0x48);
} // namespace world
} // namespace RED4ext
