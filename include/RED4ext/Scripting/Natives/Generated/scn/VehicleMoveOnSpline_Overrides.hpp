#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleMoveOnSpline_Overrides.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/Marker.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) VehicleMoveOnSpline_Overrides : quest::IVehicleMoveOnSpline_Overrides
{
    static constexpr const char* NAME = "scnVehicleMoveOnSpline_Overrides";
    static constexpr const char* ALIAS = NAME;

    bool useEntry; // 30
    bool useExit; // 31
    uint8_t unk32[0x34 - 0x32]; // 32
    float entrySpeed; // 34
    float exitSpeed; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    Transform entryTransform; // 40
    Transform exitTransform; // 60
    scn::Marker entryMarker; // 80
    scn::Marker exitMarker; // E0
};
RED4EXT_ASSERT_SIZE(VehicleMoveOnSpline_Overrides, 0x140);
} // namespace scn
using scnVehicleMoveOnSpline_Overrides = scn::VehicleMoveOnSpline_Overrides;
} // namespace RED4ext

// clang-format on
