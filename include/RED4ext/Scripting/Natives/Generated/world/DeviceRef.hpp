#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace world
{
struct DeviceRef
{
    static constexpr const char* NAME = "worldDeviceRef";
    static constexpr const char* ALIAS = "DeviceRef";

    NodeRef nodeRef; // 00
    CName componentName; // 08
    CName deviceClassName; // 10
};
RED4EXT_ASSERT_SIZE(DeviceRef, 0x18);
} // namespace world
using worldDeviceRef = world::DeviceRef;
using DeviceRef = world::DeviceRef;
} // namespace RED4ext

// clang-format on
