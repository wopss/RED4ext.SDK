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
struct AnimFeatureEntry
{
    static constexpr const char* NAME = "animAnimFeatureEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName className; // 08
    bool forceAllocate; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(AnimFeatureEntry, 0x18);
} // namespace anim
using animAnimFeatureEntry = anim::AnimFeatureEntry;
} // namespace RED4ext

// clang-format on
