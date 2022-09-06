#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EDepthCollisionEffect.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct CParticleModificatorDepthCollision : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorDepthCollision";
    static constexpr const char* ALIAS = NAME;

    uint32_t maxCollisions; // 80
    float restitution; // 84
    float friction; // 88
    float radius; // 8C
    EDepthCollisionEffect collisionEffect; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(CParticleModificatorDepthCollision, 0x98);
} // namespace RED4ext

// clang-format on
