#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDataAddress.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimationBuffer.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimationBufferSimd : anim::IAnimationBuffer
{
    static constexpr const char* NAME = "animAnimationBufferSimd";
    static constexpr const char* ALIAS = NAME;

    float duration; // 30
    uint32_t numFrames; // 34
    uint8_t numExtraJoints; // 38
    uint8_t numExtraTracks; // 39
    bool isScaleConstant; // 3A
    bool isTrackConstant; // 3B
    uint16_t numJoints; // 3C
    uint16_t numTracks; // 3E
    uint16_t numTranslationsToCopy; // 40
    uint16_t numTranslationsToEvalAlignedToSimd; // 42
    uint16_t quantizationBits; // 44
    uint8_t unk46[0x48 - 0x46]; // 46
    anim::AnimDataAddress dataAddress; // 48
    uint8_t unk54[0x58 - 0x54]; // 54
    DeferredDataBuffer defferedBuffer; // 58
    DataBuffer inplaceCompressedBuffer; // B0
    DynArray<CName> extraDataNames; // D8
    DynArray<uint16_t> fallbackFrameIndices; // E8
    uint8_t unkF8[0x1A0 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(AnimationBufferSimd, 0x1A0);
} // namespace anim
using animAnimationBufferSimd = anim::AnimationBufferSimd;
} // namespace RED4ext

// clang-format on
