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
struct AnimTransformMappingEntry
{
    static constexpr const char* NAME = "animAnimTransformMappingEntry";
    static constexpr const char* ALIAS = NAME;

    CName from; // 00
    CName to; // 08
    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(AnimTransformMappingEntry, 0x18);
} // namespace anim
using animAnimTransformMappingEntry = anim::AnimTransformMappingEntry;
} // namespace RED4ext

// clang-format on
