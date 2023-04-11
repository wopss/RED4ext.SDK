#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/CustomEmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct DroneMetadata : audio::CustomEmitterMetadata
{
    static constexpr const char* NAME = "audioDroneMetadata";
    static constexpr const char* ALIAS = NAME;

    CName boneName; // 38
    CName engineStart; // 40
    CName engineStop; // 48
    CName combatEnter; // 50
    CName combatExit; // 58
    CName targetLost; // 60
    CName idle; // 68
    CName initialReaction; // 70
    CName investigationIgnore; // 78
    CName noClearShot; // 80
    CName targetComplies; // 88
    CName lookForIntruder; // 90
    CName droneDestroyed; // 98
    CName droneDefeated; // A0
    CName commandHolsterWeapon; // A8
    CName commandLeaveArea; // B0
    CName finalWarning; // B8
    float playDistance; // C0
    uint8_t unkC4[0xC8 - 0xC4]; // C4
    DynArray<CName> decorators; // C8
};
RED4EXT_ASSERT_SIZE(DroneMetadata, 0xD8);
} // namespace audio
using audioDroneMetadata = audio::DroneMetadata;
} // namespace RED4ext

// clang-format on
