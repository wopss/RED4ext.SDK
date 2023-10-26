#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) FollowObject
{
    static constexpr const char* NAME = "vehicleFollowObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(FollowObject, 0x50);
} // namespace vehicle
using vehicleFollowObject = vehicle::FollowObject;
} // namespace RED4ext

// clang-format on
