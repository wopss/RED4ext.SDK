#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct IEvaluatorVector;

struct CParticleModificatorRotationRate3DOverLife : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorRotationRate3DOverLife";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> rotationRate; // 80
};
RED4EXT_ASSERT_SIZE(CParticleModificatorRotationRate3DOverLife, 0x90);
} // namespace RED4ext

// clang-format on
