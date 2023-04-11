#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim
{
struct LookAtVehicleRestrictionParams : ISerializable
{
    static constexpr const char* NAME = "animLookAtVehicleRestrictionParams";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x48 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(LookAtVehicleRestrictionParams, 0x48);
} // namespace anim
using animLookAtVehicleRestrictionParams = anim::LookAtVehicleRestrictionParams;
} // namespace RED4ext

// clang-format on
