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
struct PlayAnimEventData
{
    static constexpr const char* NAME = "scnPlayAnimEventData";
    static constexpr const char* ALIAS = NAME;

    float blendIn; // 00
    float blendOut; // 04
    float clipFront; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    float stretch; // 10
    float weight; // 14
    CName bodyPartMask; // 18
};
RED4EXT_ASSERT_SIZE(PlayAnimEventData, 0x20);
} // namespace scn
using scnPlayAnimEventData = scn::PlayAnimEventData;
} // namespace RED4ext

// clang-format on
