#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace rend
{
struct RenderParticleUpdaterData
{
    static constexpr const char* NAME = "rendRenderParticleUpdaterData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DataBuffer data; // 08
    uint32_t modifOffset; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<float> animFrameInit; // 38
    float turbulenceNoiseInterval; // 48
    float turbulenceDuration; // 4C
    uint64_t collisionMask; // 50
    float collisionDynamicFriction; // 58
    float collisionStaticFriction; // 5C
    float collisionRestitution; // 60
    float collisionVelocityDamp; // 64
    bool collisionDisableGravity; // 68
    uint8_t unk69[0x6C - 0x69]; // 69
    float collisionRadius; // 6C
    uint32_t collisionEffectMask; // 70
    uint8_t maxCollisions; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    CName eventGenerate; // 78
    CName eventReceive; // 80
    float eventFrequency; // 88
    float eventProbability; // 8C
    uint8_t eventSpawnObject; // 90
    uint8_t noiseType; // 91
    bool randomPerChannel; // 92
    uint8_t unk93[0x98 - 0x93]; // 93
};
RED4EXT_ASSERT_SIZE(RenderParticleUpdaterData, 0x98);
} // namespace rend
using rendRenderParticleUpdaterData = rend::RenderParticleUpdaterData;
} // namespace RED4ext

// clang-format on
