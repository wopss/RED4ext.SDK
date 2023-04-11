#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleMultipliers.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct AudioVehicleMultipliers_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questAudioVehicleMultipliers_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 30
    audio::VehicleMultipliers multipliers; // 68
};
RED4EXT_ASSERT_SIZE(AudioVehicleMultipliers_NodeType, 0x70);
} // namespace quest
using questAudioVehicleMultipliers_NodeType = quest::AudioVehicleMultipliers_NodeType;
} // namespace RED4ext

// clang-format on
