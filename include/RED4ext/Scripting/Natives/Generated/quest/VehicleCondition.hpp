#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TypedCondition.hpp>

namespace RED4ext
{
namespace quest { struct IVehicleConditionType; }

namespace quest
{
struct VehicleCondition : quest::TypedCondition
{
    static constexpr const char* NAME = "questVehicleCondition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IVehicleConditionType> type; // 30
};
RED4EXT_ASSERT_SIZE(VehicleCondition, 0x40);
} // namespace quest
using questVehicleCondition = quest::VehicleCondition;
} // namespace RED4ext

// clang-format on
