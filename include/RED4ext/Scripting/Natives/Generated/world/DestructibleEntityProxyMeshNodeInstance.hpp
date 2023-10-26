#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EntityProxyMeshNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) DestructibleEntityProxyMeshNodeInstance : world::EntityProxyMeshNodeInstance
{
    static constexpr const char* NAME = "worldDestructibleEntityProxyMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x140 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(DestructibleEntityProxyMeshNodeInstance, 0x140);
} // namespace world
using worldDestructibleEntityProxyMeshNodeInstance = world::DestructibleEntityProxyMeshNodeInstance;
} // namespace RED4ext

// clang-format on
