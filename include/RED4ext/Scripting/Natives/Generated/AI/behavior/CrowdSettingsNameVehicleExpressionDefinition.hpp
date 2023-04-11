#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/VehicleExpressionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct CrowdSettingsNameVehicleExpressionDefinition : AI::behavior::VehicleExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorCrowdSettingsNameVehicleExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    CName settingsName; // 40
};
RED4EXT_ASSERT_SIZE(CrowdSettingsNameVehicleExpressionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorCrowdSettingsNameVehicleExpressionDefinition = AI::behavior::CrowdSettingsNameVehicleExpressionDefinition;
} // namespace RED4ext

// clang-format on
