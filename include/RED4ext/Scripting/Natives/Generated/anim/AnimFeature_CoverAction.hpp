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
struct AnimFeature_CoverAction : anim::AnimFeature_AIAction
{
    static constexpr const char* NAME = "animAnimFeature_CoverAction";
    static constexpr const char* ALIAS = "AnimFeature_CoverAction";

    int32_t coverStance; // 50
    int32_t coverActionType; // 54
    int32_t coverShootType; // 58
    int32_t movementType; // 5C
};
RED4EXT_ASSERT_SIZE(AnimFeature_CoverAction, 0x60);
} // namespace anim
using animAnimFeature_CoverAction = anim::AnimFeature_CoverAction;
using AnimFeature_CoverAction = anim::AnimFeature_CoverAction;
} // namespace RED4ext

// clang-format on
