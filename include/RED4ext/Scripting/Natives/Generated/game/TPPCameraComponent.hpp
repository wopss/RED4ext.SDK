#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct TPPCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameTPPCameraComponent";
    static constexpr const char* ALIAS = "TPPCameraComponent";

    uint8_t unk2A0[0x3B0 - 0x2A0]; // 2A0
};
RED4EXT_ASSERT_SIZE(TPPCameraComponent, 0x3B0);
} // namespace game
using TPPCameraComponent = game::TPPCameraComponent;
} // namespace RED4ext
