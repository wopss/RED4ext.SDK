#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CAgent.hpp>

namespace RED4ext
{
namespace AI { 
struct VehicleAgent : AI::CAgent
{
    static constexpr const char* NAME = "AIVehicleAgent";
    static constexpr const char* ALIAS = "AIVehicleAgent";

};
RED4EXT_ASSERT_SIZE(VehicleAgent, 0x4E8);
} // namespace AI
} // namespace RED4ext
