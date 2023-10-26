#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature_BasicAim.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimFeature_Aim : anim::AnimFeature_BasicAim
{
    static constexpr const char* NAME = "animAnimFeature_Aim";
    static constexpr const char* ALIAS = "AnimFeature_Aim";

    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 aimPoint; // 50
};
RED4EXT_ASSERT_SIZE(AnimFeature_Aim, 0x60);
} // namespace anim
using animAnimFeature_Aim = anim::AnimFeature_Aim;
using AnimFeature_Aim = anim::AnimFeature_Aim;
} // namespace RED4ext

// clang-format on
