#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class EffectTriggerPositioningType : int32_t
{
    PlayerRoot = 0,
    CameraRoot = 1,
    AtSpawn = 2,
    XYCameraZPlayer = 3,
    XYPlayerZCamera = 4,
    XYCameraZTerrain = 5,
    XYPlayerZTerrain = 6,
};
} // namespace game
using gameEffectTriggerPositioningType = game::EffectTriggerPositioningType;
} // namespace RED4ext

// clang-format on
