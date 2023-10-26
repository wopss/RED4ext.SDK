#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/AudioPSData.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/DestructionPSData.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/WheelRuntimePSData.hpp>

namespace RED4ext
{
namespace vehicle
{
struct __declspec(align(0x10)) PersistentDataPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehiclePersistentDataPS";
    static constexpr const char* ALIAS = NAME;

    uint32_t flags; // 68
    float autopilotPos; // 6C
    float autopilotCurrentSpeed; // 70
    bool isHackable; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<vehicle::WheelRuntimePSData, 4> wheelRuntimeData; // 78
    Transform questEnforcedTransform; // E0
    vehicle::DestructionPSData destruction; // 100
    vehicle::AudioPSData audio; // 1A8
    uint8_t unk1F8[0x220 - 0x1F8]; // 1F8
};
RED4EXT_ASSERT_SIZE(PersistentDataPS, 0x220);
} // namespace vehicle
using vehiclePersistentDataPS = vehicle::PersistentDataPS;
} // namespace RED4ext

// clang-format on
