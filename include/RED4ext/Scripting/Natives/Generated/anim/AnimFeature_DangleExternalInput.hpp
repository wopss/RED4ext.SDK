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
struct __declspec(align(0x10)) AnimFeature_DangleExternalInput : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_DangleExternalInput";
    static constexpr const char* ALIAS = NAME;

    Vector4 fictitiousAccelerationWs; // 40
};
RED4EXT_ASSERT_SIZE(AnimFeature_DangleExternalInput, 0x50);
} // namespace anim
using animAnimFeature_DangleExternalInput = anim::AnimFeature_DangleExternalInput;
} // namespace RED4ext

// clang-format on
