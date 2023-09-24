#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEntityManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerRemoteControlVehicle_NodeType : quest::IEntityManager_NodeType
{
    static constexpr const char* NAME = "questEntityManagerRemoteControlVehicle_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference parentRef; // 30
    bool enable; // 68
    bool shouldUnseatPassengers; // 69
    bool shouldModifyInteractionState; // 6A
    uint8_t unk6B[0x70 - 0x6B]; // 6B
};
RED4EXT_ASSERT_SIZE(EntityManagerRemoteControlVehicle_NodeType, 0x70);
} // namespace quest
using questEntityManagerRemoteControlVehicle_NodeType = quest::EntityManagerRemoteControlVehicle_NodeType;
} // namespace RED4ext

// clang-format on
