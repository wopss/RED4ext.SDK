#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/EmitterLOD.hpp>

namespace RED4ext
{
namespace rend
{
struct __declspec(align(0x10)) RenderParticleBlobEmitterInfo
{
    static constexpr const char* NAME = "rendRenderParticleBlobEmitterInfo";
    static constexpr const char* ALIAS = NAME;

    uint64_t emitterHash; // 00
    float diffuseWrapFactor; // 08
    float backLightingFactor; // 0C
    uint32_t lightingMipBias; // 10
    uint32_t maxParticles; // 14
    int8_t emitterLoops; // 18
    uint8_t internalPriority; // 19
    bool maskInsideCar; // 1A
    bool maskInsideInterior; // 1B
    bool maskAboveWater; // 1C
    bool maskUnderWater; // 1D
    bool keepSimulationLocal; // 1E
    bool killOnCollision; // 1F
    uint8_t initialParticleCount; // 20
    bool useSubFrameEmission; // 21
    uint8_t unk22[0x24 - 0x22]; // 22
    float windInfluence; // 24
    uint32_t particleType; // 28
    uint32_t vertexDrawerType; // 2C
    uint32_t simulationType; // 30
    uint32_t envColorGroup; // 34
    uint32_t emitterGroup; // 38
    ERenderObjectType renderObjectType; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
    uint32_t numModifiers; // 40
    uint32_t numInitializers; // 44
    uint64_t modifierSetMask; // 48
    uint64_t initializerSetMask; // 50
    uint64_t simulationHash; // 58
    uint16_t eventSetMask; // 60
    uint8_t unk62[0x68 - 0x62]; // 62
    DynArray<uint32_t> seeds; // 68
    DynArray<rend::EmitterLOD> lods; // 78
    bool volumetricParticleEnabled; // 88
    bool volumetricParticleRelative; // 89
    bool volumetricParticleUseFogColor; // 8A
    uint8_t unk8B[0x90 - 0x8B]; // 8B
    HDRColor volumetricParticleColor; // 90
    float volumetricParticleSize; // A0
    float volumetricParticleDensity; // A4
    float volumetricParticleFalloff; // A8
    float volumetricParticleNoiseScale; // AC
    float volumetricParticleNoiseThreshold; // B0
    Vector3 volumetricParticleNoiseVelocity; // B4
    uint8_t unkC0[0xD0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(RenderParticleBlobEmitterInfo, 0xD0);
} // namespace rend
using rendRenderParticleBlobEmitterInfo = rend::RenderParticleBlobEmitterInfo;
} // namespace RED4ext

// clang-format on
