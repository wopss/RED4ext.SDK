#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_BlendSpace_InternalsBlendSpaceCoordinateDescription
{
    static constexpr const char* NAME = "animAnimNode_BlendSpace_InternalsBlendSpaceCoordinateDescription";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    float minValue; // 08
    float maxValue; // 0C
    uint32_t gridDivisionsCount; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendSpace_InternalsBlendSpaceCoordinateDescription, 0x18);
} // namespace anim
} // namespace RED4ext
