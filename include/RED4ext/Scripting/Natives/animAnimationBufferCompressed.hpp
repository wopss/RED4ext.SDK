#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/AnimBufferState.hpp>
#include <RED4ext/Scripting/Natives/AnimKeyFrames.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDataAddress.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimationBuffer.hpp>
#include <RED4ext/Span.hpp>
#include <cstdint>

namespace RED4ext
{
namespace anim
{
struct AnimationBufferCompressed : anim::IAnimationBuffer
{
    static constexpr const char* NAME = "animAnimationBufferCompressed";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint16_t> fallbackFrameIndices;     // 30
    float duration;                              // 40
    uint32_t numFrames;                          // 44
    uint8_t numExtraJoints;                      // 48
    uint8_t numExtraTracks;                      // 49
    bool isScaleConstant;                        // 4A
    bool hasRawRotations;                        // 4B
    uint16_t numJoints;                          // 4C
    uint16_t numTracks;                          // 4E
    uint32_t numAnimKeysCompressed;              // 50
    uint32_t numAnimKeysRaw;                     // 54
    uint32_t numConstAnimKeys;                   // 58
    uint32_t numTrackKeys;                       // 5C
    uint32_t numConstTrackKeys;                  // 60
    AnimDataAddress dataAddress;                 // 64
    DeferredDataBuffer defferedBuffer;           // 70
    DataBuffer inplaceCompressedBuffer;          // C8
    DynArray<CName> extraDataNames;              // F0
    uint8_t unk100[0x110 - 0x100];               // 100
    Span<KeyFrameCompressed> compressedAnimKeys; // 110
    Span<KeyFrameRaw> rawAnimKeys;               // 120
    Span<KeyFrameConst> constAnimKeys;           // 130
    Span<TrackKey> trackKeys;                    // 140
    Span<TrackKeyConst> constTrackKeys;          // 150
    AnimBufferState dataState;                   // 160
    uint64_t unk180;                             // 180
};
RED4EXT_ASSERT_SIZE(AnimationBufferCompressed, 0x188);
} // namespace anim
using animAnimationBufferCompressed = anim::AnimationBufferCompressed;
} // namespace RED4ext
