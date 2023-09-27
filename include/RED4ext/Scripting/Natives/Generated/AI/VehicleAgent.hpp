#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CAgent.hpp>

namespace RED4ext
{
namespace AI
{
struct VehicleAgent : AI::CAgent
{
    static constexpr const char* NAME = "AIVehicleAgent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk4F0[0x570 - 0x4F0]; // 4F0
};
RED4EXT_ASSERT_SIZE(VehicleAgent, 0x570);
} // namespace AI
using AIVehicleAgent = AI::VehicleAgent;
} // namespace RED4ext

// clang-format on
