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

struct CParticleModificatorAcceleration : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorAcceleration";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> direction; // 80
    Handle<IEvaluatorFloat> scale; // 90
    bool worldSpace; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
};
RED4EXT_ASSERT_SIZE(CParticleModificatorAcceleration, 0xA8);
} // namespace RED4ext

// clang-format on
