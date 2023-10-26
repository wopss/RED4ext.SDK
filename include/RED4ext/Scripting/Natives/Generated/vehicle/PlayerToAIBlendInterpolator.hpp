#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) PlayerToAIBlendInterpolator
{
    static constexpr const char* NAME = "vehiclePlayerToAIBlendInterpolator";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x90 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(PlayerToAIBlendInterpolator, 0x90);
} // namespace vehicle
using vehiclePlayerToAIBlendInterpolator = vehicle::PlayerToAIBlendInterpolator;
} // namespace RED4ext

// clang-format on
