#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/FormationType.hpp>

namespace RED4ext
{
namespace quest
{
struct FormConvoy_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questFormConvoy_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference leaderRef; // 30
    vehicle::FormationType formationType; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(FormConvoy_NodeType, 0x70);
} // namespace quest
using questFormConvoy_NodeType = quest::FormConvoy_NodeType;
} // namespace RED4ext

// clang-format on
