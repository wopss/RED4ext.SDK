#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/cloth/PhaseConfig.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/cloth/RuntimeInfo.hpp>

namespace RED4ext
{
namespace physics::cloth { 
struct State
{
    static constexpr const char* NAME = "physicsclothState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    physics::cloth::PhaseConfig bendPhaseData; // 10
    physics::cloth::PhaseConfig shearPhaseData; // 20
    physics::cloth::PhaseConfig horizontalPhaseData; // 30
    physics::cloth::PhaseConfig verticalPhaseData; // 40
    physics::cloth::RuntimeInfo runtimeInfo; // 50
};
RED4EXT_ASSERT_SIZE(State, 0xC0);
} // namespace physics::cloth
} // namespace RED4ext
