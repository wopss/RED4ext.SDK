#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct ToggleSwitchSeatsForPlayer_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questToggleSwitchSeatsForPlayer_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ToggleSwitchSeatsForPlayer_NodeType, 0x30);
} // namespace quest
using questToggleSwitchSeatsForPlayer_NodeType = quest::ToggleSwitchSeatsForPlayer_NodeType;
} // namespace RED4ext

// clang-format on
