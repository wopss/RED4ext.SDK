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
struct __declspec(align(0x10)) AnimFeature_WallRun : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_WallRun";
    static constexpr const char* ALIAS = "AnimFeature_WallRun";

    bool wallOnRightSide; // 40
    uint8_t unk41[0x50 - 0x41]; // 41
    Vector4 wallPosition; // 50
    Vector4 wallNormal; // 60
};
RED4EXT_ASSERT_SIZE(AnimFeature_WallRun, 0x70);
} // namespace anim
using animAnimFeature_WallRun = anim::AnimFeature_WallRun;
using AnimFeature_WallRun = anim::AnimFeature_WallRun;
} // namespace RED4ext

// clang-format on
