#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;
struct IEvaluatorVector;

struct CParticleModificatorVelocityTurbulize : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorVelocityTurbulize";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> scale; // 80
    float noiseInterval; // 90
    float duration; // 94
    Handle<IEvaluatorFloat> timelifeLimit; // 98
    bool worldSpace; // A8
    uint8_t unkA9[0xB0 - 0xA9]; // A9
};
RED4EXT_ASSERT_SIZE(CParticleModificatorVelocityTurbulize, 0xB0);
} // namespace RED4ext

// clang-format on
