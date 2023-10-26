#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
struct CParticleSystem;

namespace ent
{
struct __declspec(align(0x10)) ParticlesComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entParticlesComponent";
    static constexpr const char* ALIAS = NAME;

    float autoHideRange; // 140
    float emissionRate; // 144
    Ref<CParticleSystem> particleSystem; // 148
    uint8_t unk160[0x168 - 0x160]; // 160
    RenderSceneLayerMask renderLayerMask; // 168
    uint8_t unk169[0x180 - 0x169]; // 169
};
RED4EXT_ASSERT_SIZE(ParticlesComponent, 0x180);
} // namespace ent
using entParticlesComponent = ent::ParticlesComponent;
} // namespace RED4ext

// clang-format on
