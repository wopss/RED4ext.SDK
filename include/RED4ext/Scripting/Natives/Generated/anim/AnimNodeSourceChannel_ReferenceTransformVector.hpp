#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Vector.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNodeSourceChannel_ReferenceTransformVector : anim::IAnimNodeSourceChannel_Vector
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_ReferenceTransformVector";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transformIndex; // 30
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_ReferenceTransformVector, 0x48);
} // namespace anim
using animAnimNodeSourceChannel_ReferenceTransformVector = anim::AnimNodeSourceChannel_ReferenceTransformVector;
} // namespace RED4ext

// clang-format on
