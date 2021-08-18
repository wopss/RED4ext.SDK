#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct EntityProxyMeshNodeInstance : world::PrefabProxyMeshNodeInstance
{
    static constexpr const char* NAME = "worldEntityProxyMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk110[0x120 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(EntityProxyMeshNodeInstance, 0x120);
} // namespace world
} // namespace RED4ext
