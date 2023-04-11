#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct OverrideBlendTrackInfo
{
    static constexpr const char* NAME = "animOverrideBlendTrackInfo";
    static constexpr const char* ALIAS = NAME;

    anim::NamedTrackIndex track; // 00
    float weight; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(OverrideBlendTrackInfo, 0x20);
} // namespace anim
using animOverrideBlendTrackInfo = anim::OverrideBlendTrackInfo;
} // namespace RED4ext

// clang-format on
