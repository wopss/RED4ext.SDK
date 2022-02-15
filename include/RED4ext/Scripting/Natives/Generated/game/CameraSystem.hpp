#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ICameraSystem.hpp>

namespace RED4ext
{
namespace game { 
struct CameraSystem : game::ICameraSystem
{
    static constexpr const char* NAME = "gameCameraSystem";
    static constexpr const char* ALIAS = "CameraSystem";

    uint8_t unk48[0x720 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CameraSystem, 0x720);
} // namespace game
using CameraSystem = game::CameraSystem;
} // namespace RED4ext
