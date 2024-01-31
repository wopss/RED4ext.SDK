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
struct JoinTraffic_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questJoinTraffic_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
};
RED4EXT_ASSERT_SIZE(JoinTraffic_NodeType, 0x68);
} // namespace quest
using questJoinTraffic_NodeType = quest::JoinTraffic_NodeType;
} // namespace RED4ext

// clang-format on
