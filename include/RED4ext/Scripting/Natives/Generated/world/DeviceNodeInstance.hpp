#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/EntityNodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) DeviceNodeInstance : world::EntityNodeInstance
{
    static constexpr const char* NAME = "worldDeviceNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DeviceNodeInstance, 0xF0);
} // namespace world
using worldDeviceNodeInstance = world::DeviceNodeInstance;
} // namespace RED4ext

// clang-format on
