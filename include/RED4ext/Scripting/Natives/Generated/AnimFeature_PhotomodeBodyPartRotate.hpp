#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
struct AnimFeature_PhotomodeBodyPartRotate : anim::AnimFeature
{
    static constexpr const char* NAME = "AnimFeature_PhotomodeBodyPartRotate";
    static constexpr const char* ALIAS = NAME;

    float rotateDegree; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_PhotomodeBodyPartRotate, 0x48);
} // namespace RED4ext

// clang-format on
