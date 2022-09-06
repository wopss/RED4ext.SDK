#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CParticleDrawerMotionBlur : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerMotionBlur";
    static constexpr const char* ALIAS = NAME;

    float stretchPerVelocity; // 38
    bool isGPUBased; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
};
RED4EXT_ASSERT_SIZE(CParticleDrawerMotionBlur, 0x40);
} // namespace RED4ext

// clang-format on
