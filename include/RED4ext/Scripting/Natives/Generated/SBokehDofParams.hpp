#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EApertureValue.hpp>

namespace RED4ext
{
struct SBokehDofParams
{
    static constexpr const char* NAME = "SBokehDofParams";
    static constexpr const char* ALIAS = NAME;

    float planeInFocus; // 00
    EApertureValue fStops; // 04
    float bokehSizeMuliplier; // 08
    float hexToCircleScale; // 0C
    bool enabled; // 10
    bool usePhysicalSetup; // 11
    uint8_t unk12[0x14 - 0x12]; // 12
};
RED4EXT_ASSERT_SIZE(SBokehDofParams, 0x14);
} // namespace RED4ext
