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
struct SetImmovable_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questSetImmovable_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    bool enable; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(SetImmovable_NodeType, 0x70);
} // namespace quest
using questSetImmovable_NodeType = quest::SetImmovable_NodeType;
} // namespace RED4ext

// clang-format on
