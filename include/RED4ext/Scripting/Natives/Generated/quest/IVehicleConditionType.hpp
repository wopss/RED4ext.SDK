#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct IVehicleConditionType : quest::IConditionType
{
    static constexpr const char* NAME = "questIVehicleConditionType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IVehicleConditionType, 0x38);
} // namespace quest
using questIVehicleConditionType = quest::IVehicleConditionType;
} // namespace RED4ext

// clang-format on
