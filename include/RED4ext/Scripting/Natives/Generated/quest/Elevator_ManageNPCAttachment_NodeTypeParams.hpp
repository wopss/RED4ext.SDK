#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Elevator_ManageNPCAttachment_NodeTypeParamsAction.hpp>

namespace RED4ext
{
namespace quest
{
struct Elevator_ManageNPCAttachment_NodeTypeParams
{
    static constexpr const char* NAME = "questElevator_ManageNPCAttachment_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef elevatorRef; // 00
    game::EntityReference npcRef; // 08
    quest::Elevator_ManageNPCAttachment_NodeTypeParamsAction action; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(Elevator_ManageNPCAttachment_NodeTypeParams, 0x48);
} // namespace quest
using questElevator_ManageNPCAttachment_NodeTypeParams = quest::Elevator_ManageNPCAttachment_NodeTypeParams;
} // namespace RED4ext

// clang-format on
