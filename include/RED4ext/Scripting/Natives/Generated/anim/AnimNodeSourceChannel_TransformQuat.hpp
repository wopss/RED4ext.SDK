#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_Quat.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNodeSourceChannel_TransformQuat : anim::IAnimNodeSourceChannel_Quat
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_TransformQuat";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transformIndex; // 30
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_TransformQuat, 0x48);
} // namespace anim
using animAnimNodeSourceChannel_TransformQuat = anim::AnimNodeSourceChannel_TransformQuat;
} // namespace RED4ext

// clang-format on
