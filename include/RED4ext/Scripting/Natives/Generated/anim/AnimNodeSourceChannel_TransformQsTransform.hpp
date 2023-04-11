#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNodeSourceChannel_TransformQsTransform : anim::IAnimNodeSourceChannel_QsTransform
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_TransformQsTransform";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex transformIndex; // 30
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_TransformQsTransform, 0x48);
} // namespace anim
using animAnimNodeSourceChannel_TransformQsTransform = anim::AnimNodeSourceChannel_TransformQsTransform;
} // namespace RED4ext

// clang-format on
