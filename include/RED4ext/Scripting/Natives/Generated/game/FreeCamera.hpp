#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct FreeCamera : game::Object
{
    static constexpr const char* NAME = "gameFreeCamera";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x248 - 0x240]; // 240
    float baseSpeed; // 248
    float analogTurnRate; // 24C
    float mouseTurnRate; // 250
    float activationBlendTime; // 254
    float deactivationBlendTime; // 258
    bool usePhysicalCollision; // 25C
    uint8_t unk25D[0x298 - 0x25D]; // 25D
};
RED4EXT_ASSERT_SIZE(FreeCamera, 0x298);
} // namespace game
using gameFreeCamera = game::FreeCamera;
} // namespace RED4ext

// clang-format on
