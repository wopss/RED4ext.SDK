#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtLimits.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtPartRequest.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtRequest
{
    static constexpr const char* NAME = "animLookAtRequest";
    static constexpr const char* ALIAS = "LookAtRequest";

    float transitionSpeed; // 00
    bool hasOutTransition; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    float outTransitionSpeed; // 08
    float followingSpeedFactorOverride; // 0C
    anim::LookAtLimits limits; // 10
    float suppress; // 20
    int32_t mode; // 24
    bool calculatePositionInParentSpace; // 28
    uint8_t unk29[0x2C - 0x29]; // 29
    int32_t priority; // 2C
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<anim::LookAtPartRequest, 2> additionalParts; // 30
    bool invalid; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(LookAtRequest, 0x70);
} // namespace anim
using animLookAtRequest = anim::LookAtRequest;
using LookAtRequest = anim::LookAtRequest;
} // namespace RED4ext

// clang-format on
