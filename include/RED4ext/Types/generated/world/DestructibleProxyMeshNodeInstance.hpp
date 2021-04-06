#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/PrefabProxyMeshNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct DestructibleProxyMeshNodeInstance : world::PrefabProxyMeshNodeInstance
{
    static constexpr const char* NAME = "worldDestructibleProxyMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk110[0x130 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(DestructibleProxyMeshNodeInstance, 0x130);
} // namespace world
} // namespace RED4ext
