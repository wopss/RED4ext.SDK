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
struct __declspec(align(0x10)) AnimFeature_MeleeIKData : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_MeleeIKData";
    static constexpr const char* ALIAS = "AnimFeature_MeleeIKData";

    bool isValid; // 40
    uint8_t unk41[0x50 - 0x41]; // 41
    Vector4 headPosition; // 50
    Vector4 chestPosition; // 60
    Vector4 ikOffset; // 70
};
RED4EXT_ASSERT_SIZE(AnimFeature_MeleeIKData, 0x80);
} // namespace anim
using animAnimFeature_MeleeIKData = anim::AnimFeature_MeleeIKData;
using AnimFeature_MeleeIKData = anim::AnimFeature_MeleeIKData;
} // namespace RED4ext

// clang-format on
