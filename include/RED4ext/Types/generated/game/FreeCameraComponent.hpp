#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct FreeCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameFreeCameraComponent";
    static constexpr const char* ALIAS = "FreeCameraComponent";

    uint8_t unk290[0x3E0 - 0x290]; // 290
};
RED4EXT_ASSERT_SIZE(FreeCameraComponent, 0x3E0);
} // namespace game
using FreeCameraComponent = game::FreeCameraComponent;
} // namespace RED4ext
