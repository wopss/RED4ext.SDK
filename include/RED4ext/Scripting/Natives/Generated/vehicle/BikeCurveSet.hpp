#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CurveSet.hpp>

namespace RED4ext
{
namespace vehicle
{
struct BikeCurveSet : CurveSet
{
    static constexpr const char* NAME = "vehicleBikeCurveSet";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(BikeCurveSet, 0x50);
} // namespace vehicle
using vehicleBikeCurveSet = vehicle::BikeCurveSet;
} // namespace RED4ext

// clang-format on
