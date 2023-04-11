#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct Driver
{
    static constexpr const char* NAME = "vehicleDriver";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x28 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(Driver, 0x28);
} // namespace vehicle
using vehicleDriver = vehicle::Driver;
} // namespace RED4ext

// clang-format on
