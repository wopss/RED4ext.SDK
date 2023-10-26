#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ICameraSystem.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) CameraSystem : game::ICameraSystem
{
    static constexpr const char* NAME = "gameCameraSystem";
    static constexpr const char* ALIAS = "CameraSystem";

    uint8_t unk48[0x730 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CameraSystem, 0x730);
} // namespace game
using gameCameraSystem = game::CameraSystem;
using CameraSystem = game::CameraSystem;
} // namespace RED4ext

// clang-format on
