#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) TPPCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "vehicleTPPCameraComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk320[0x680 - 0x320]; // 320
};
RED4EXT_ASSERT_SIZE(TPPCameraComponent, 0x680);
} // namespace vehicle
using vehicleTPPCameraComponent = vehicle::TPPCameraComponent;
} // namespace RED4ext

// clang-format on
