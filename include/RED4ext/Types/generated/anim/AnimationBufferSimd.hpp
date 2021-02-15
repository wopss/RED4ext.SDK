#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/anim/AnimFallbackFrameDesc.hpp>
#include <RED4ext/Types/generated/anim/IAnimationBuffer.hpp>

namespace RED4ext
{
namespace anim { 
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
    DeferredDataBuffer defferedBuffer; // 48
    DataBuffer inplaceCompressedBuffer; // A0
    DynArray<CName> extraDataNames; // C8
    anim::AnimFallbackFrameDesc fallbackFrameDesc; // D8
    uint8_t unkE0[0x100 - 0xE0]; // E0
    DataBuffer fallbackFrameBuffer; // 100
    uint8_t unk128[0x1D0 - 0x128]; // 128
};
RED4EXT_ASSERT_SIZE(AnimationBufferSimd, 0x1D0);
} // namespace anim
} // namespace RED4ext
