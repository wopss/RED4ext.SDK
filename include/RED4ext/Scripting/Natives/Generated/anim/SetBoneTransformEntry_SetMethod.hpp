#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace anim {
enum class SetBoneTransformEntry_SetMethod : int32_t
{
    NoSnapping = 0,
    WholeTransform = 1,
    TranslationOnly = 2,
    RotationOnly = 3,
};
} // namespace anim
using animSetBoneTransformEntry_SetMethod = anim::SetBoneTransformEntry_SetMethod;
} // namespace RED4ext

// clang-format on
