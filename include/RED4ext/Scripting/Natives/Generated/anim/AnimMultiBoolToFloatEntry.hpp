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
struct AnimMultiBoolToFloatEntry
{
    static constexpr const char* NAME = "animAnimMultiBoolToFloatEntry";
    static constexpr const char* ALIAS = NAME;

    CName group; // 00
    CName name; // 08
};
RED4EXT_ASSERT_SIZE(AnimMultiBoolToFloatEntry, 0x10);
} // namespace anim
using animAnimMultiBoolToFloatEntry = anim::AnimMultiBoolToFloatEntry;
} // namespace RED4ext

// clang-format on
