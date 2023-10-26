#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) FreeCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameFreeCameraComponent";
    static constexpr const char* ALIAS = "FreeCameraComponent";

    uint8_t unk320[0x4F0 - 0x320]; // 320
};
RED4EXT_ASSERT_SIZE(FreeCameraComponent, 0x4F0);
} // namespace game
using gameFreeCameraComponent = game::FreeCameraComponent;
using FreeCameraComponent = game::FreeCameraComponent;
} // namespace RED4ext

// clang-format on
