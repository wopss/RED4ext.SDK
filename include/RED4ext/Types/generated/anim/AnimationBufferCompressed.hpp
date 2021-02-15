#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/anim/AnimDataAddress.hpp>
#include <RED4ext/Types/generated/anim/AnimFallbackFrameDesc.hpp>
#include <RED4ext/Types/generated/anim/IAnimationBuffer.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimationBufferCompressed : anim::IAnimationBuffer
{
    static constexpr const char* NAME = "animAnimationBufferCompressed";
    static constexpr const char* ALIAS = NAME;

    float duration; // 30
    uint32_t numFrames; // 34
    uint8_t numExtraJoints; // 38
    uint8_t numExtraTracks; // 39
    bool isScaleConstant; // 3A
    bool hasRawRotations; // 3B
    uint16_t numJoints; // 3C
    uint16_t numTracks; // 3E
    uint32_t numAnimKeys; // 40
    uint32_t numAnimKeysRaw; // 44
    uint32_t numConstAnimKeys; // 48
    uint32_t numTrackKeys; // 4C
    uint32_t numConstTrackKeys; // 50
    anim::AnimDataAddress dataAddress; // 54
    DeferredDataBuffer defferedBuffer; // 60
    DataBuffer inplaceCompressedBuffer; // B8
    DynArray<CName> extraDataNames; // E0
    uint8_t unkF0[0x110 - 0xF0]; // F0
    DataBuffer fallbackFrameBuffer; // 110
    anim::AnimFallbackFrameDesc fallbackFrameDesc; // 138
    uint8_t unk140[0x1C8 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(AnimationBufferCompressed, 0x1C8);
} // namespace anim
} // namespace RED4ext
