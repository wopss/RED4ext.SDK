#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace vehicle
{
struct DestructionPSData
{
    static constexpr const char* NAME = "vehicleDestructionPSData";
    static constexpr const char* ALIAS = NAME;

    NativeArray<float, 30> gridValues; // 00
    uint32_t brokenGlass; // 78
    uint32_t brokenLights; // 7C
    uint8_t flatTire; // 80
    bool windshieldShattered; // 81
    uint8_t unk82[0x88 - 0x82]; // 82
    DynArray<Vector3> windshieldPoints; // 88
    DynArray<CName> detachedParts; // 98
};
RED4EXT_ASSERT_SIZE(DestructionPSData, 0xA8);
} // namespace vehicle
using vehicleDestructionPSData = vehicle::DestructionPSData;
} // namespace RED4ext

// clang-format on
