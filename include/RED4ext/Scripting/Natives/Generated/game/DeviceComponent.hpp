#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct DeviceComponent : game::Component
{
    static constexpr const char* NAME = "gameDeviceComponent";
    static constexpr const char* ALIAS = "DeviceComponent";

};
RED4EXT_ASSERT_SIZE(DeviceComponent, 0xA8);
} // namespace game
using gameDeviceComponent = game::DeviceComponent;
using DeviceComponent = game::DeviceComponent;
} // namespace RED4ext

// clang-format on
