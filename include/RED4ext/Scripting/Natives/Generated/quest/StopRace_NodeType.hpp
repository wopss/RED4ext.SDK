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
struct StopRace_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questStopRace_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StopRace_NodeType, 0x30);
} // namespace quest
using questStopRace_NodeType = quest::StopRace_NodeType;
} // namespace RED4ext

// clang-format on
