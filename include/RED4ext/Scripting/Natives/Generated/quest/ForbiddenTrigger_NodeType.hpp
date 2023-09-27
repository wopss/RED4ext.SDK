#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ForbiddenTrigger_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questForbiddenTrigger_NodeType";
    static constexpr const char* ALIAS = NAME;

    NodeRef triggerNodeRef; // 30
    bool activate; // 38
    bool dismount; // 39
    bool blockCombat; // 3A
    uint8_t unk3B[0x40 - 0x3B]; // 3B
};
RED4EXT_ASSERT_SIZE(ForbiddenTrigger_NodeType, 0x40);
} // namespace quest
using questForbiddenTrigger_NodeType = quest::ForbiddenTrigger_NodeType;
} // namespace RED4ext

// clang-format on
