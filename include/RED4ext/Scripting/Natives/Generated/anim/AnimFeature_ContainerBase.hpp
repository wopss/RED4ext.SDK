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
struct AnimFeature_ContainerBase : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_ContainerBase";
    static constexpr const char* ALIAS = "AnimFeature_Loot";

    bool opened; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float transitionDuration; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_ContainerBase, 0x48);
} // namespace anim
using animAnimFeature_ContainerBase = anim::AnimFeature_ContainerBase;
using AnimFeature_Loot = anim::AnimFeature_ContainerBase;
} // namespace RED4ext

// clang-format on
