#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TeleportPuppetParams.hpp>

namespace RED4ext
{
namespace quest
{
struct TeleportVehicleNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "questTeleportVehicleNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 48
    quest::TeleportPuppetParams params; // 80
    bool resetVelocities; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
};
RED4EXT_ASSERT_SIZE(TeleportVehicleNodeDefinition, 0xA8);
} // namespace quest
using questTeleportVehicleNodeDefinition = quest::TeleportVehicleNodeDefinition;
} // namespace RED4ext

// clang-format on
