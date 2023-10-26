#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature_Movement.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_PlayerMovement : anim::AnimFeature_Movement
{
    static constexpr const char* NAME = "animAnimFeature_PlayerMovement";
    static constexpr const char* ALIAS = "AnimFeature_PlayerMovement";

    Vector4 facingDirection; // 70
    float standingTerrainAngle; // 80
    float verticalSpeed; // 84
    float movementDirectionHorizontalAngle; // 88
    bool inAir; // 8C
    uint8_t unk8D[0x90 - 0x8D]; // 8D
};
RED4EXT_ASSERT_SIZE(AnimFeature_PlayerMovement, 0x90);
} // namespace anim
using animAnimFeature_PlayerMovement = anim::AnimFeature_PlayerMovement;
using AnimFeature_PlayerMovement = anim::AnimFeature_PlayerMovement;
} // namespace RED4ext

// clang-format on
