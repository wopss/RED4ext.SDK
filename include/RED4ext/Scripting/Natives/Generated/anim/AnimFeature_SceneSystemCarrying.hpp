#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_SceneSystemCarrying : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_SceneSystemCarrying";
    static constexpr const char* ALIAS = NAME;

    bool carrying; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AnimFeature_SceneSystemCarrying, 0x48);
} // namespace anim
using animAnimFeature_SceneSystemCarrying = anim::AnimFeature_SceneSystemCarrying;
} // namespace RED4ext

// clang-format on
