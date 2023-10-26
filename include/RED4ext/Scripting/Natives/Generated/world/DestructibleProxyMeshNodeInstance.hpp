#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/PrefabProxyMeshNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) DestructibleProxyMeshNodeInstance : world::PrefabProxyMeshNodeInstance
{
    static constexpr const char* NAME = "worldDestructibleProxyMeshNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk110[0x130 - 0x110]; // 110
};
RED4EXT_ASSERT_SIZE(DestructibleProxyMeshNodeInstance, 0x130);
} // namespace world
using worldDestructibleProxyMeshNodeInstance = world::DestructibleProxyMeshNodeInstance;
} // namespace RED4ext

// clang-format on
