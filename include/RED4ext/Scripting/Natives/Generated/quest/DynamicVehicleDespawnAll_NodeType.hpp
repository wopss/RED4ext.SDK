#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDynamicSpawnSystemType.hpp>

namespace RED4ext
{
namespace quest
{
struct DynamicVehicleDespawnAll_NodeType : quest::IDynamicSpawnSystemType
{
    static constexpr const char* NAME = "questDynamicVehicleDespawnAll_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool ImmediateDespawn; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(DynamicVehicleDespawnAll_NodeType, 0x38);
} // namespace quest
using questDynamicVehicleDespawnAll_NodeType = quest::DynamicVehicleDespawnAll_NodeType;
} // namespace RED4ext

// clang-format on
