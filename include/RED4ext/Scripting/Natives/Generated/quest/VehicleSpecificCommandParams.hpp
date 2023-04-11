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
struct VehicleSpecificCommandParams : ISerializable
{
    static constexpr const char* NAME = "questVehicleSpecificCommandParams";
    static constexpr const char* ALIAS = NAME;

    bool pushOtherVehiclesAside; // 30
    bool needDriver; // 31
    uint8_t unk32[0x34 - 0x32]; // 32
    float secureTimeOut; // 34
};
RED4EXT_ASSERT_SIZE(VehicleSpecificCommandParams, 0x38);
} // namespace quest
using questVehicleSpecificCommandParams = quest::VehicleSpecificCommandParams;
} // namespace RED4ext

// clang-format on
