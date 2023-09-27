#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace world
{
struct DesiredSlotsCountInfo
{
    static constexpr const char* NAME = "worldDesiredSlotsCountInfo";
    static constexpr const char* ALIAS = NAME;

    float siredSlotsCount; // 00
    float nCoeff; // 04
    float nCoeffWhenMounted; // 08
};
RED4EXT_ASSERT_SIZE(DesiredSlotsCountInfo, 0xC);
} // namespace world
using worldDesiredSlotsCountInfo = world::DesiredSlotsCountInfo;
} // namespace RED4ext

// clang-format on
