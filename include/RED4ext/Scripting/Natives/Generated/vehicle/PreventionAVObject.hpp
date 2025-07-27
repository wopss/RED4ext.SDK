#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/AVBaseObject.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) PreventionAVObject : vehicle::AVBaseObject
{
    static constexpr const char* NAME = "vehiclePreventionAVObject";
    static constexpr const char* ALIAS = "PreventionAVObject";

    uint8_t unkBA0[0xBB0 - 0xBA0]; // BA0
};
RED4EXT_ASSERT_SIZE(PreventionAVObject, 0xBB0);
} // namespace vehicle
using vehiclePreventionAVObject = vehicle::PreventionAVObject;
using PreventionAVObject = vehicle::PreventionAVObject;
} // namespace RED4ext

// clang-format on
