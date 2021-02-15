#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/IParticleInitializer.hpp>

namespace RED4ext
{
struct IEvaluatorVector;

struct CParticleInitializerVelocity : IParticleInitializer
{
    static constexpr const char* NAME = "CParticleInitializerVelocity";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> velocity; // 80
    float scale; // 90
    bool worldSpace; // 94
    uint8_t unk95[0x98 - 0x95]; // 95
};
RED4EXT_ASSERT_SIZE(CParticleInitializerVelocity, 0x98);
} // namespace RED4ext
