#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace game { struct DeviceResourceData; }

namespace game
{
struct DeviceResource : CResource
{
    static constexpr const char* NAME = "gameDeviceResource";
    static constexpr const char* ALIAS = NAME;

    Handle<game::DeviceResourceData> data; // 40
};
RED4EXT_ASSERT_SIZE(DeviceResource, 0x50);
} // namespace game
using gameDeviceResource = game::DeviceResource;
} // namespace RED4ext

// clang-format on
