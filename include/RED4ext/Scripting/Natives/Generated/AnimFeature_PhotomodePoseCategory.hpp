#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
struct AnimFeature_PhotomodePoseCategory : anim::AnimFeature
{
    static constexpr const char* NAME = "AnimFeature_PhotomodePoseCategory";
    static constexpr const char* ALIAS = NAME;

    int32_t poseCategoryIndex; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_PhotomodePoseCategory, 0x48);
} // namespace RED4ext

// clang-format on
