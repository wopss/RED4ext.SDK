#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct CParticleModificatorCollision : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorCollision";
    static constexpr const char* ALIAS = NAME;

    float restitution; // 80
    float dynamicFriction; // 84
    float staticFriction; // 88
    float velocityDamp; // 8C
    float angularVelocityDamp; // 90
    float particleMass; // 94
    float particleRadius; // 98
    bool useGPUAcceleration; // 9C
    bool disableGravity; // 9D
    bool killOnCollision; // 9E
    uint8_t unk9F[0xA0 - 0x9F]; // 9F
};
RED4EXT_ASSERT_SIZE(CParticleModificatorCollision, 0xA0);
} // namespace RED4ext

// clang-format on
