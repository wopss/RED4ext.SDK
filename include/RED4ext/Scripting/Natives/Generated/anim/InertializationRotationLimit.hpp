#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/InertializationFloatClamp.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct InertializationRotationLimit
{
    static constexpr const char* NAME = "animInertializationRotationLimit";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex constrainedTransform; // 00
    anim::InertializationFloatClamp limitOnX; // 18
    anim::InertializationFloatClamp limitOnY; // 24
    anim::InertializationFloatClamp limitOnZ; // 30
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(InertializationRotationLimit, 0x40);
} // namespace anim
using animInertializationRotationLimit = anim::InertializationRotationLimit;
} // namespace RED4ext

// clang-format on
