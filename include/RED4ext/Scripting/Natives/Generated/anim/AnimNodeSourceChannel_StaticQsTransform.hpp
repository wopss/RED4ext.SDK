#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimNodeSourceChannel_QsTransform.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNodeSourceChannel_StaticQsTransform : anim::IAnimNodeSourceChannel_QsTransform
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_StaticQsTransform";
    static constexpr const char* ALIAS = NAME;

    QsTransform data; // 30
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_StaticQsTransform, 0x60);
} // namespace anim
using animAnimNodeSourceChannel_StaticQsTransform = anim::AnimNodeSourceChannel_StaticQsTransform;
} // namespace RED4ext

// clang-format on
