#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EntityProxyMeshNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct DestructibleEntityProxyMeshNodeInstance : world::EntityProxyMeshNodeInstance
{
    static constexpr const char* NAME = "worldDestructibleEntityProxyMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x140 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(DestructibleEntityProxyMeshNodeInstance, 0x140);
} // namespace world
} // namespace RED4ext
