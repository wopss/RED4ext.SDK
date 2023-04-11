#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AssignConvoy_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questAssignConvoy_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleLeaderRef; // 30
    DynArray<game::EntityReference> Followers; // 68
    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(AssignConvoy_NodeType, 0x80);
} // namespace quest
using questAssignConvoy_NodeType = quest::AssignConvoy_NodeType;
} // namespace RED4ext

// clang-format on
