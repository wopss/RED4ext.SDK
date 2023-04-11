#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SAnimationBufferBitwiseCompressedData.hpp>

namespace RED4ext
{
namespace anim
{
struct SAnimationBufferBitwiseCompressedBoneTrack
{
    static constexpr const char* NAME = "animSAnimationBufferBitwiseCompressedBoneTrack";
    static constexpr const char* ALIAS = NAME;

    anim::SAnimationBufferBitwiseCompressedData position; // 00
    anim::SAnimationBufferBitwiseCompressedData orientation; // 10
    anim::SAnimationBufferBitwiseCompressedData scale; // 20
};
RED4EXT_ASSERT_SIZE(SAnimationBufferBitwiseCompressedBoneTrack, 0x30);
} // namespace anim
using animSAnimationBufferBitwiseCompressedBoneTrack = anim::SAnimationBufferBitwiseCompressedBoneTrack;
} // namespace RED4ext

// clang-format on
