#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ResourceReferenceScriptToken.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleDecalAttachmentData
{
    static constexpr const char* NAME = "vehicleVehicleDecalAttachmentData";
    static constexpr const char* ALIAS = "VehicleDecalAttachmentData";

    CName componentToAttachTo; // 00
    red::ResourceReferenceScriptToken decalReference; // 08
};
RED4EXT_ASSERT_SIZE(VehicleDecalAttachmentData, 0x10);
} // namespace vehicle
using vehicleVehicleDecalAttachmentData = vehicle::VehicleDecalAttachmentData;
using VehicleDecalAttachmentData = vehicle::VehicleDecalAttachmentData;
} // namespace RED4ext

// clang-format on
