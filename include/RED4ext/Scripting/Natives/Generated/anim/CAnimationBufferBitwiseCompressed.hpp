#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/SAnimationBufferOrientationCompressionMethod.hpp>
#include <RED4ext/Scripting/Natives/Generated/SAnimationBufferStreamingOption.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IAnimationBuffer.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SAnimationBufferBitwiseCompressedBoneTrack.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SAnimationBufferBitwiseCompressedData.hpp>

namespace RED4ext
{
namespace anim
{
struct CAnimationBufferBitwiseCompressed : anim::IAnimationBuffer
{
    static constexpr const char* NAME = "animCAnimationBufferBitwiseCompressed";
    static constexpr const char* ALIAS = NAME;

    uint32_t version; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<anim::SAnimationBufferBitwiseCompressedBoneTrack> bones; // 38
    DynArray<anim::SAnimationBufferBitwiseCompressedData> tracks; // 48
    DynArray<int8_t> data; // 58
    DynArray<int8_t> fallbackData; // 68
    DeferredDataBuffer deferredData; // 78
    uint8_t unkD0[0xE4 - 0xD0]; // D0
    SAnimationBufferStreamingOption streamingOption; // E4
    uint32_t nonStreamableBones; // E8
    SAnimationBufferOrientationCompressionMethod orientationCompressionMethod; // EC
    float duration; // F0
    uint32_t numFrames; // F4
    float dt; // F8
    uint32_t numExtraBones; // FC
    DynArray<CName> extraDataNames; // 100
};
RED4EXT_ASSERT_SIZE(CAnimationBufferBitwiseCompressed, 0x110);
} // namespace anim
using animCAnimationBufferBitwiseCompressed = anim::CAnimationBufferBitwiseCompressed;
} // namespace RED4ext

// clang-format on
