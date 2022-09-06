#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ENoiseType.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct IEvaluatorVector;

struct CParticleModificatorNoise : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorNoise";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> amplitude; // 80
    Handle<IEvaluatorVector> offset; // 90
    Handle<IEvaluatorVector> frequency; // A0
    Vector3 changeRate; // B0
    bool applyToPosition; // BC
    bool worldSpaceOffset; // BD
    uint8_t unkBE[0xC0 - 0xBE]; // BE
    ENoiseType noiseType; // C0
    uint8_t unkC4[0xC8 - 0xC4]; // C4
};
RED4EXT_ASSERT_SIZE(CParticleModificatorNoise, 0xC8);
} // namespace RED4ext

// clang-format on
