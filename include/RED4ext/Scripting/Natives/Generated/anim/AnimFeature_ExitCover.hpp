#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature_AIAction.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_ExitCover : anim::AnimFeature_AIAction
{
    static constexpr const char* NAME = "animAnimFeature_ExitCover";
    static constexpr const char* ALIAS = "AnimFeature_ExitCover";

    int32_t coverStance; // 50
    int32_t coverExitDirection; // 54
};
RED4EXT_ASSERT_SIZE(AnimFeature_ExitCover, 0x58);
} // namespace anim
using animAnimFeature_ExitCover = anim::AnimFeature_ExitCover;
using AnimFeature_ExitCover = anim::AnimFeature_ExitCover;
} // namespace RED4ext

// clang-format on
