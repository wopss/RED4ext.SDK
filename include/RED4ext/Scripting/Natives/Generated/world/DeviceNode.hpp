#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/DeviceConnections.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EntityNode.hpp>

namespace RED4ext
{
namespace world
{
struct DeviceNode : world::EntityNode
{
    static constexpr const char* NAME = "worldDeviceNode";
    static constexpr const char* ALIAS = NAME;

    CName deviceClassName; // 60
    float alphaHackStreamingDistanceOverride; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    DynArray<world::DeviceConnections> deviceConnections; // 70
};
RED4EXT_ASSERT_SIZE(DeviceNode, 0x80);
} // namespace world
using worldDeviceNode = world::DeviceNode;
} // namespace RED4ext

// clang-format on
