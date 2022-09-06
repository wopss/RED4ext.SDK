#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/EmitterDelaySettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/EmitterDurationSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/ParticleBurst.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EParticleSortingMode.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

struct SParticleEmitterLODLevel
{
    static constexpr const char* NAME = "SParticleEmitterLODLevel";
    static constexpr const char* ALIAS = NAME;

    float lodSwitchDistance; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<ParticleBurst> burstList; // 08
    Handle<IEvaluatorFloat> birthRate; // 18
    EmitterDurationSettings emitterDurationSettings; // 28
    EmitterDelaySettings emitterDelaySettings; // 34
    rend::EParticleSortingMode sortingMode; // 40
    bool isEnabled; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(SParticleEmitterLODLevel, 0x48);
} // namespace RED4ext

// clang-format on
