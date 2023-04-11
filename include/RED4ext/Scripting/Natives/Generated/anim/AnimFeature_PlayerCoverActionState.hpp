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
struct AnimFeature_PlayerCoverActionState : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_PlayerCoverActionState";
    static constexpr const char* ALIAS = "AnimFeature_PlayerCoverActionState";

    int32_t state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimFeature_PlayerCoverActionState, 0x48);
} // namespace anim
using animAnimFeature_PlayerCoverActionState = anim::AnimFeature_PlayerCoverActionState;
using AnimFeature_PlayerCoverActionState = anim::AnimFeature_PlayerCoverActionState;
} // namespace RED4ext

// clang-format on
