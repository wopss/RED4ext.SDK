#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world { 
struct DeviceConnections
{
    static constexpr const char* NAME = "worldDeviceConnections";
    static constexpr const char* ALIAS = NAME;

    CName deviceClassName; // 00
    DynArray<NodeRef> nodeRefs; // 08
};
RED4EXT_ASSERT_SIZE(DeviceConnections, 0x18);
} // namespace world
} // namespace RED4ext
