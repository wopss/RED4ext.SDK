#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct ForcePhysicsWakeUp_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questForcePhysicsWakeUp_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
};
RED4EXT_ASSERT_SIZE(ForcePhysicsWakeUp_NodeType, 0x68);
} // namespace quest
} // namespace RED4ext
