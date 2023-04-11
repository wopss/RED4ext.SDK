#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct SAnimationBufferBitwiseCompressedData
{
    static constexpr const char* NAME = "animSAnimationBufferBitwiseCompressedData";
    static constexpr const char* ALIAS = NAME;

    float dt; // 00
    int8_t compression; // 04
    uint8_t unk05[0x6 - 0x5]; // 5
    uint16_t numFrames; // 06
    uint32_t dataAddr; // 08
    uint32_t dataAddrFallback; // 0C
};
RED4EXT_ASSERT_SIZE(SAnimationBufferBitwiseCompressedData, 0x10);
} // namespace anim
using animSAnimationBufferBitwiseCompressedData = anim::SAnimationBufferBitwiseCompressedData;
} // namespace RED4ext

// clang-format on
