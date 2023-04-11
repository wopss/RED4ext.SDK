#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace quest
{
struct IVehicleMoveOnSpline_Overrides : ISerializable
{
    static constexpr const char* NAME = "questIVehicleMoveOnSpline_Overrides";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IVehicleMoveOnSpline_Overrides, 0x30);
} // namespace quest
using questIVehicleMoveOnSpline_Overrides = quest::IVehicleMoveOnSpline_Overrides;
} // namespace RED4ext

// clang-format on
