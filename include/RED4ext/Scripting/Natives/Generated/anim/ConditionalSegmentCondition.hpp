#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct ConditionalSegmentCondition
{
    static constexpr const char* NAME = "animConditionalSegmentCondition";
    static constexpr const char* ALIAS = NAME;

    int32_t lod; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName group; // 08
    CName name; // 10
    bool animFeatureValue; // 18
    uint8_t unk19[0x30 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(ConditionalSegmentCondition, 0x30);
} // namespace anim
using animConditionalSegmentCondition = anim::ConditionalSegmentCondition;
} // namespace RED4ext

// clang-format on
