#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Types/generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
struct CParticleSystem;

namespace ent { 
struct ParticlesComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entParticlesComponent";
    static constexpr const char* ALIAS = NAME;

    float autoHideRange; // 140
    float emissionRate; // 144
    Ref<CParticleSystem> particleSystem; // 148
    uint8_t unk160[0x178 - 0x160]; // 160
    RenderSceneLayerMask renderLayerMask; // 178
    uint8_t unk179[0x190 - 0x179]; // 179
};
RED4EXT_ASSERT_SIZE(ParticlesComponent, 0x190);
} // namespace ent
} // namespace RED4ext
