#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EParticleSortingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EmitterDelaySettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EmitterDurationSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/ParticleBurst.hpp>

namespace RED4ext
{
namespace rend
{
struct EmitterLOD
{
    static constexpr const char* NAME = "rendEmitterLOD";
    static constexpr const char* ALIAS = NAME;

    float lodSwitchDistance; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<rend::ParticleBurst> burstList; // 08
    DynArray<float> birthRate; // 18
    rend::EmitterDurationSettings emitterDurationSettings; // 28
    rend::EmitterDelaySettings emitterDelaySettings; // 34
    rend::EParticleSortingMode sortingMode; // 40
    bool isEnabled; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(EmitterLOD, 0x48);
} // namespace rend
using rendEmitterLOD = rend::EmitterLOD;
} // namespace RED4ext

// clang-format on
