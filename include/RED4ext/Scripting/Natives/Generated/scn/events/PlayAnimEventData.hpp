#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/EasingType.hpp>

namespace RED4ext
{
namespace scn::events
{
struct PlayAnimEventData
{
    static constexpr const char* NAME = "scneventsPlayAnimEventData";
    static constexpr const char* ALIAS = NAME;

    float blendIn; // 00
    float blendOut; // 04
    float clipFront; // 08
    float clipEnd; // 0C
    float stretch; // 10
    scn::EasingType blendInCurve; // 14
    scn::EasingType blendOutCurve; // 15
    uint8_t unk16[0x18 - 0x16]; // 16
};
RED4EXT_ASSERT_SIZE(PlayAnimEventData, 0x18);
} // namespace scn::events
using scneventsPlayAnimEventData = scn::events::PlayAnimEventData;
} // namespace RED4ext

// clang-format on
