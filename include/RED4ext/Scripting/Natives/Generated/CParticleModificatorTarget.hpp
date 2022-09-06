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

struct CParticleModificatorTarget : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorTarget";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> position; // 80
    Handle<IEvaluatorFloat> forceScale; // 90
    Handle<IEvaluatorFloat> killRadius; // A0
    float maxForce; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(CParticleModificatorTarget, 0xB8);
} // namespace RED4ext

// clang-format on
