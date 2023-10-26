#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEmitterGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEnvColorGroup.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderObjectType.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModule.hpp>
#include <RED4ext/Scripting/Natives/Generated/SParticleEmitterLODLevel.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
struct CDecalSpawner;
struct IMaterial;
struct IParticleDrawer;
struct IParticleModule;
struct IRenderResourceBlob;

struct __declspec(align(0x10)) CParticleEmitter : IParticleModule
{
    static constexpr const char* NAME = "CParticleEmitter";
    static constexpr const char* ALIAS = NAME;

    DynArray<SParticleEmitterLODLevel> lods; // 78
    Ref<IMaterial> material; // 88
    Handle<IMaterial> localMaterialInstance; // A0
    float diffuseWrapFactor; // B0
    float backLightingFactor; // B4
    uint32_t lightingMipBias; // B8
    uint16_t maxParticles; // BC
    uint8_t unkBE[0xC0 - 0xBE]; // BE
    DynArray<Handle<IParticleModule>> modules; // C0
    int8_t emitterLoops; // D0
    uint8_t unkD1[0xD8 - 0xD1]; // D1
    Handle<IParticleDrawer> particleDrawer; // D8
    Handle<CDecalSpawner> decalSpawner; // E8
    bool maskInsideCar; // F8
    bool maskInsideInterior; // F9
    bool maskAboveWater; // FA
    bool maskUnderWater; // FB
    bool useSubFrameEmission; // FC
    bool keepSimulationLocal; // FD
    bool killOnCollision; // FE
    uint8_t initialParticleCount; // FF
    uint8_t unk100[0x110 - 0x100]; // 100
    float windInfluence; // 110
    EEnvColorGroup envColorGroup; // 114
    EEmitterGroup emitterGroup; // 115
    ERenderObjectType renderObjectType; // 116
    uint8_t unk117[0x118 - 0x117]; // 117
    int32_t positionX; // 118
    int32_t positionY; // 11C
    uint8_t internalPriority; // 120
    uint8_t unk121[0x130 - 0x121]; // 121
    Handle<IRenderResourceBlob> renderResourceBlob; // 130
    uint8_t unk140[0x141 - 0x140]; // 140
    bool Enabled; // 141
    bool Relative; // 142
    bool UseEnvironmentFogColor; // 143
    uint8_t unk144[0x150 - 0x144]; // 144
    HDRColor Color; // 150
    float Size; // 160
    float Density; // 164
    float Falloff; // 168
    float NoiseScale; // 16C
    float NoiseThreshold; // 170
    Vector3 NoiseVelocity; // 174
    uint8_t unk180[0x190 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(CParticleEmitter, 0x190);
} // namespace RED4ext

// clang-format on
