#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/TeleportPuppetParams.hpp>

namespace RED4ext
{
namespace quest
{
struct Teleport_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questTeleport_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityReference; // 30
    quest::TeleportPuppetParams params; // 68
};
RED4EXT_ASSERT_SIZE(Teleport_NodeType, 0x88);
} // namespace quest
using questTeleport_NodeType = quest::Teleport_NodeType;
} // namespace RED4ext

// clang-format on
