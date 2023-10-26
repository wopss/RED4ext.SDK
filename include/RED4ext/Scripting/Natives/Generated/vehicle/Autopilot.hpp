#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) Autopilot
{
    static constexpr const char* NAME = "vehicleAutopilot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x3C0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(Autopilot, 0x3C0);
} // namespace vehicle
using vehicleAutopilot = vehicle::Autopilot;
} // namespace RED4ext

// clang-format on
