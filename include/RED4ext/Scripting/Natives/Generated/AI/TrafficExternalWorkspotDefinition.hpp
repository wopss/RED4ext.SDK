#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TrafficSpotDefinition.hpp>

namespace RED4ext
{
namespace AI { 
struct TrafficExternalWorkspotDefinition : world::TrafficSpotDefinition
{
    static constexpr const char* NAME = "AITrafficExternalWorkspotDefinition";
    static constexpr const char* ALIAS = NAME;

    NodeRef globalWorkspotNodeRef; // 48
    bool nearestPointEntry; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(TrafficExternalWorkspotDefinition, 0x58);
} // namespace AI
} // namespace RED4ext
