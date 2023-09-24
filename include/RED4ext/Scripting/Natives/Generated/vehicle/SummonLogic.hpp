#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct SummonLogic
{
    static constexpr const char* NAME = "vehicleSummonLogic";
    static constexpr const char* ALIAS = "SummonLogic";

    uint8_t unk00[0x1A0 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SummonLogic, 0x1A0);
} // namespace vehicle
using vehicleSummonLogic = vehicle::SummonLogic;
using SummonLogic = vehicle::SummonLogic;
} // namespace RED4ext

// clang-format on
