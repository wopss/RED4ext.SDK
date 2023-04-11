#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/SAnimationBufferOrientationCompressionMethod.hpp>

namespace RED4ext
{
namespace anim
{
struct SAnimationBufferBitwiseCompressionSettings
{
    static constexpr const char* NAME = "animSAnimationBufferBitwiseCompressionSettings";
    static constexpr const char* ALIAS = NAME;

    float translationTolerance; // 00
    float translationSkipFrameTolerance; // 04
    float orientationTolerance; // 08
    SAnimationBufferOrientationCompressionMethod orientationCompressionMethod; // 0C
    float orientationSkipFrameTolerance; // 10
    float scaleTolerance; // 14
    float scaleSkipFrameTolerance; // 18
    float trackTolerance; // 1C
    float trackSkipFrameTolerance; // 20
};
RED4EXT_ASSERT_SIZE(SAnimationBufferBitwiseCompressionSettings, 0x24);
} // namespace anim
using animSAnimationBufferBitwiseCompressionSettings = anim::SAnimationBufferBitwiseCompressionSettings;
} // namespace RED4ext

// clang-format on
