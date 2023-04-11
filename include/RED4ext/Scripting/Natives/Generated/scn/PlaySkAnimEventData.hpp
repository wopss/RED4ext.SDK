#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace scn
{
struct PlaySkAnimEventData
{
    static constexpr const char* NAME = "scnPlaySkAnimEventData";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 00
    float blendIn; // 08
    float blendOut; // 0C
    float clipFront; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
    float stretch; // 18
    float weight; // 1C
    CName bodyPartMask; // 20
};
RED4EXT_ASSERT_SIZE(PlaySkAnimEventData, 0x28);
} // namespace scn
using scnPlaySkAnimEventData = scn::PlaySkAnimEventData;
} // namespace RED4ext

// clang-format on
