#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;
struct IEvaluatorVector;

struct CParticleModificatorForce : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorForce";
    static constexpr const char* ALIAS = NAME;

    Vector3 pivot; // 80
    float radius; // 8C
    Handle<IEvaluatorFloat> scale; // 90
    Handle<IEvaluatorVector> damp; // A0
};
RED4EXT_ASSERT_SIZE(CParticleModificatorForce, 0xB0);
} // namespace RED4ext

// clang-format on
