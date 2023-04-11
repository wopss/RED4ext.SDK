#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ForcePhysicsWakeUp_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questForcePhysicsWakeUp_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
};
RED4EXT_ASSERT_SIZE(ForcePhysicsWakeUp_NodeType, 0x68);
} // namespace quest
using questForcePhysicsWakeUp_NodeType = quest::ForcePhysicsWakeUp_NodeType;
} // namespace RED4ext

// clang-format on
