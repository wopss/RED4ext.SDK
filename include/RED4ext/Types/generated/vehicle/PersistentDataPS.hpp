#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Transform.hpp>
#include <RED4ext/Types/generated/game/ComponentPS.hpp>
#include <RED4ext/Types/generated/vehicle/AudioPSData.hpp>
#include <RED4ext/Types/generated/vehicle/DestructionPSData.hpp>
#include <RED4ext/Types/generated/vehicle/WheelRuntimePSData.hpp>

namespace RED4ext
{
namespace vehicle { 
struct PersistentDataPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehiclePersistentDataPS";
    static constexpr const char* ALIAS = NAME;

    uint32_t flags; // 68
    float autopilotPos; // 6C
    float autopilotCurrentSpeed; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    alignas(8) StaticArray<vehicle::WheelRuntimePSData, 4> wheelRuntimeData; // 78
    Transform questEnforcedTransform; // E0
    vehicle::DestructionPSData destruction; // 100
    vehicle::AudioPSData audio; // 1A8
    uint8_t unk1B8[0x1C0 - 0x1B8]; // 1B8
};
RED4EXT_ASSERT_SIZE(PersistentDataPS, 0x1C0);
} // namespace vehicle
} // namespace RED4ext
