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

struct CParticleModificatorOrbit : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorOrbit";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> offset; // 80
    Handle<IEvaluatorVector> frequency; // 90
    Handle<IEvaluatorVector> phase; // A0
    bool overridePosition; // B0
    uint8_t unkB1[0xB8 - 0xB1]; // B1
};
RED4EXT_ASSERT_SIZE(CParticleModificatorOrbit, 0xB8);
} // namespace RED4ext

// clang-format on
