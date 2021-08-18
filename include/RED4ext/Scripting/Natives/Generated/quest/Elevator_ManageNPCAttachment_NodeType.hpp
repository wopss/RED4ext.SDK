#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Elevator_ManageNPCAttachment_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInteractiveObjectManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct Elevator_ManageNPCAttachment_NodeType : quest::IInteractiveObjectManagerNodeType
{
    static constexpr const char* NAME = "questElevator_ManageNPCAttachment_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::Elevator_ManageNPCAttachment_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(Elevator_ManageNPCAttachment_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
