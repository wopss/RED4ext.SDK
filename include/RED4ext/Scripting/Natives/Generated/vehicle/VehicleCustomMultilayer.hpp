#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ResourceReferenceScriptToken.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleCustomMultilayer
{
    static constexpr const char* NAME = "vehicleVehicleCustomMultilayer";
    static constexpr const char* ALIAS = "VehicleCustomMultilayer";

    DynArray<CName> affectedComponents; // 00
    DynArray<CName> excludedComponents; // 10
    red::ResourceReferenceScriptToken customMlSetup; // 20
    red::ResourceReferenceScriptToken customMlMask; // 28
    float coatLayerMin; // 30
    float coatLayerMax; // 34
};
RED4EXT_ASSERT_SIZE(VehicleCustomMultilayer, 0x38);
} // namespace vehicle
using vehicleVehicleCustomMultilayer = vehicle::VehicleCustomMultilayer;
using VehicleCustomMultilayer = vehicle::VehicleCustomMultilayer;
} // namespace RED4ext

// clang-format on
