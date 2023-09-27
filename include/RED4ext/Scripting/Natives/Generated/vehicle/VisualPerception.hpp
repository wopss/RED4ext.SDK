#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VisualPerception
{
    static constexpr const char* NAME = "vehicleVisualPerception";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x158 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(VisualPerception, 0x158);
} // namespace vehicle
using vehicleVisualPerception = vehicle::VisualPerception;
} // namespace RED4ext

// clang-format on
