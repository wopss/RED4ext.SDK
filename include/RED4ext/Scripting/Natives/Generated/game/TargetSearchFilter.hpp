#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct TargetSearchFilter
{
    static constexpr const char* NAME = "gameTargetSearchFilter";
    static constexpr const char* ALIAS = "TargetSearchFilter";

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(TargetSearchFilter, 0x18);
} // namespace game
using gameTargetSearchFilter = game::TargetSearchFilter;
using TargetSearchFilter = game::TargetSearchFilter;
} // namespace RED4ext

// clang-format on
