#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct Screenshot360CameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameScreenshot360CameraComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk290[0x2D0 - 0x290]; // 290
};
RED4EXT_ASSERT_SIZE(Screenshot360CameraComponent, 0x2D0);
} // namespace game
} // namespace RED4ext
