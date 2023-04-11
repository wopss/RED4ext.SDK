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
struct StartRace_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questStartRace_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StartRace_NodeType, 0x30);
} // namespace quest
using questStartRace_NodeType = quest::StartRace_NodeType;
} // namespace RED4ext

// clang-format on
