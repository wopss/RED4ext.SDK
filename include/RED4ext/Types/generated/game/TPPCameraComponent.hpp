#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/CameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct TPPCameraComponent : game::CameraComponent
{
    static constexpr const char* NAME = "gameTPPCameraComponent";
    static constexpr const char* ALIAS = "TPPCameraComponent";

    uint8_t unk290[0x3A0 - 0x290]; // 290
};
RED4EXT_ASSERT_SIZE(TPPCameraComponent, 0x3A0);
} // namespace game
using TPPCameraComponent = game::TPPCameraComponent;
} // namespace RED4ext
