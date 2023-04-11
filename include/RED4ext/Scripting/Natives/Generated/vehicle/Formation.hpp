#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct Formation
{
    static constexpr const char* NAME = "vehicleFormation";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(Formation, 0x18);
} // namespace vehicle
using vehicleFormation = vehicle::Formation;
} // namespace RED4ext

// clang-format on
