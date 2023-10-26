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
struct __declspec(align(0x10)) AnimFeature_MoveTo : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_MoveTo";
    static constexpr const char* ALIAS = "AnimFeature_MoveTo";

    Vector4 initialFwdVector; // 40
    Vector4 targetPositionWs; // 50
    Vector4 targetDirectionWs; // 60
    float timeToMove; // 70
    uint8_t unk74[0x80 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(AnimFeature_MoveTo, 0x80);
} // namespace anim
using animAnimFeature_MoveTo = anim::AnimFeature_MoveTo;
using AnimFeature_MoveTo = anim::AnimFeature_MoveTo;
} // namespace RED4ext

// clang-format on
