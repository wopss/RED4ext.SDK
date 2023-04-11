#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/CameraComponentTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect
{
struct MotionBlurScalePlayData : effect::CameraComponentTrackItemPlayData
{
    static constexpr const char* NAME = "effectMotionBlurScalePlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MotionBlurScalePlayData, 0x38);
} // namespace effect
using effectMotionBlurScalePlayData = effect::MotionBlurScalePlayData;
} // namespace RED4ext

// clang-format on
