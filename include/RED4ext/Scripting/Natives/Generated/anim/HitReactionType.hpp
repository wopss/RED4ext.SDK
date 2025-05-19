#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace anim {
enum class HitReactionType : int32_t
{
    None = 0,
    Twitch = 1,
    Impact = 2,
    Stagger = 3,
    Pain = 4,
    Knockdown = 5,
    Ragdoll = 6,
    Death = 7,
    Block = 8,
    GuardBreak = 9,
    Parry = 10,
    Bump = 11,
};
} // namespace anim
using animHitReactionType = anim::HitReactionType;
} // namespace RED4ext

// clang-format on
