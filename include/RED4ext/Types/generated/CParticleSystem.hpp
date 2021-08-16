#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/ERenderingPlane.hpp>
#include <RED4ext/Types/generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CParticleEmitter;
struct ParticleDamage;

struct CParticleSystem : res::StreamedResource
{
    static constexpr const char* NAME = "CParticleSystem";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<CParticleEmitter>> emitters; // 40
    Box boundingBox; // 50
    bool forceDynamicBbox; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    float autoHideDistance; // 74
    float autoHideRange; // 78
    float lastLODFadeoutRange; // 7C
    bool visibleThroughWalls; // 80
    uint8_t unk81[0x84 - 0x81]; // 81
    float prewarmingTime; // 84
    ERenderingPlane renderingPlane; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    Handle<ParticleDamage> particleDamage; // 90
};
RED4EXT_ASSERT_SIZE(CParticleSystem, 0xA0);
} // namespace RED4ext
