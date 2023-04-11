#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNodeSourceChannel_QsTransform; }

namespace anim
{
struct AnimNodeSourceChannel_WeightedQsTransform : ISerializable
{
    static constexpr const char* NAME = "animAnimNodeSourceChannel_WeightedQsTransform";
    static constexpr const char* ALIAS = NAME;

    Handle<anim::IAnimNodeSourceChannel_QsTransform> channel; // 30
    float weight; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimNodeSourceChannel_WeightedQsTransform, 0x48);
} // namespace anim
using animAnimNodeSourceChannel_WeightedQsTransform = anim::AnimNodeSourceChannel_WeightedQsTransform;
} // namespace RED4ext

// clang-format on
