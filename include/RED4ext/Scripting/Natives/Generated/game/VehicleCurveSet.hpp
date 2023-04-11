#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CurveSet.hpp>

namespace RED4ext
{
namespace game
{
struct VehicleCurveSet : CurveSet
{
    static constexpr const char* NAME = "gameVehicleCurveSet";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VehicleCurveSet, 0x50);
} // namespace game
using gameVehicleCurveSet = game::VehicleCurveSet;
} // namespace RED4ext

// clang-format on
