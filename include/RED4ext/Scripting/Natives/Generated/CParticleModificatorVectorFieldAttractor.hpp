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

struct CParticleModificatorVectorFieldAttractor : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorVectorFieldAttractor";
    static constexpr const char* ALIAS = NAME;

    bool inheritVelocity; // 80
    bool attract; // 81
    bool drag; // 82
    uint8_t unk83[0x88 - 0x83]; // 83
    Handle<IEvaluatorFloat> restitution; // 88
};
RED4EXT_ASSERT_SIZE(CParticleModificatorVectorFieldAttractor, 0x98);
} // namespace RED4ext

// clang-format on
