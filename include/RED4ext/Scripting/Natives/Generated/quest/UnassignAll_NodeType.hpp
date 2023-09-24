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
struct UnassignAll_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questUnassignAll_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    bool isInstant; // 68
    bool clearAssignedVehicleId; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(UnassignAll_NodeType, 0x70);
} // namespace quest
using questUnassignAll_NodeType = quest::UnassignAll_NodeType;
} // namespace RED4ext

// clang-format on
