#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDynamicSpawnSystemType.hpp>

namespace RED4ext
{
namespace quest
{
struct DynamicVehicleDespawn_NodeType : quest::IDynamicSpawnSystemType
{
    static constexpr const char* NAME = "questDynamicVehicleDespawn_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool ImmediateDespawn; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    CName waveTag; // 38
};
RED4EXT_ASSERT_SIZE(DynamicVehicleDespawn_NodeType, 0x40);
} // namespace quest
using questDynamicVehicleDespawn_NodeType = quest::DynamicVehicleDespawn_NodeType;
} // namespace RED4ext

// clang-format on
