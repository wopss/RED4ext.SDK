#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderingPlane.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CParticleEmitter;
struct ParticleDamage;

struct __declspec(align(0x10)) CParticleSystem : res::StreamedResource
{
    static constexpr const char* NAME = "CParticleSystem";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<CParticleEmitter>> emitters; // 40
    Box boundingBox; // 50
    float autoHideDistance; // 70
    float autoHideRange; // 74
    float lastLODFadeoutRange; // 78
    bool visibleThroughWalls; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    float prewarmingTime; // 80
    ERenderingPlane renderingPlane; // 84
    Handle<ParticleDamage> particleDamage; // 88
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(CParticleSystem, 0xA0);
} // namespace RED4ext

// clang-format on
