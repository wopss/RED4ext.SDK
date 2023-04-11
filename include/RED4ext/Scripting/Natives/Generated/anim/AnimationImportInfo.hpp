#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EMotionExtractionCompressionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/compression/BufferTypePreset.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/compression/FrameratePreset.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/compression/QualityPreset.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimationImportInfo
{
    static constexpr const char* NAME = "animAnimationImportInfo";
    static constexpr const char* ALIAS = NAME;

    anim::compression::BufferTypePreset BufferType; // 00
    anim::compression::QualityPreset CompressionPreset; // 01
    anim::compression::FrameratePreset FrameratePreset; // 02
    uint8_t unk03[0x4 - 0x3]; // 3
    anim::EMotionExtractionCompressionType MotionExtractionCompression; // 04
    anim::AnimationType AnimationType; // 08
    uint8_t unk09[0xC - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(AnimationImportInfo, 0xC);
} // namespace anim
using animAnimationImportInfo = anim::AnimationImportInfo;
} // namespace RED4ext

// clang-format on
