#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_PlayerCover : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_PlayerCover";
    static constexpr const char* ALIAS = "AnimFeature_PlayerCover";

    Vector4 cameraPositionMS; // 40
    int32_t coverState; // 50
    float leanAmount; // 54
    float cameraOffsetAmount; // 58
    bool autoCoverActivationFrame; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(AnimFeature_PlayerCover, 0x60);
} // namespace anim
using animAnimFeature_PlayerCover = anim::AnimFeature_PlayerCover;
using AnimFeature_PlayerCover = anim::AnimFeature_PlayerCover;
} // namespace RED4ext

// clang-format on
