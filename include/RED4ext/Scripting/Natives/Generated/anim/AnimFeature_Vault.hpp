#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature_Climb.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_Vault : anim::AnimFeature_Climb
{
    static constexpr const char* NAME = "animAnimFeature_Vault";
    static constexpr const char* ALIAS = "AnimFeature_Vault";

    Vector4 landPosition; // A0
    float travellingTime; // B0
    float obstacleDepth; // B4
    uint8_t unkB8[0xC0 - 0xB8]; // B8
};
RED4EXT_ASSERT_SIZE(AnimFeature_Vault, 0xC0);
} // namespace anim
using animAnimFeature_Vault = anim::AnimFeature_Vault;
using AnimFeature_Vault = anim::AnimFeature_Vault;
} // namespace RED4ext

// clang-format on
