#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleSpecificCommandParams.hpp>

namespace RED4ext
{
namespace quest::vehicle
{
struct JoinTrafficParams : quest::VehicleSpecificCommandParams
{
    static constexpr const char* NAME = "questvehicleJoinTrafficParams";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(JoinTrafficParams, 0x38);
} // namespace quest::vehicle
using questvehicleJoinTrafficParams = quest::vehicle::JoinTrafficParams;
} // namespace RED4ext

// clang-format on
