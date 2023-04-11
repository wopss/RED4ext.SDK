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
struct NamedTrackIndex
{
    static constexpr const char* NAME = "animNamedTrackIndex";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    CName name; // 10
};
RED4EXT_ASSERT_SIZE(NamedTrackIndex, 0x18);
} // namespace anim
using animNamedTrackIndex = anim::NamedTrackIndex;
} // namespace RED4ext

// clang-format on
