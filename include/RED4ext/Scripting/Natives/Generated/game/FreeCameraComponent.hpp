#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct FreeCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameFreeCameraComponent";
    static constexpr const char* ALIAS = "FreeCameraComponent";

    uint8_t unk2A0[0x420 - 0x2A0]; // 2A0
};
RED4EXT_ASSERT_SIZE(FreeCameraComponent, 0x420);
} // namespace game
using FreeCameraComponent = game::FreeCameraComponent;
} // namespace RED4ext
