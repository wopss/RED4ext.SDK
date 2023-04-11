#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
struct CParticleSystem;

namespace world
{
struct StaticParticleNode : world::Node
{
    static constexpr const char* NAME = "worldStaticParticleNode";
    static constexpr const char* ALIAS = NAME;

    float emissionRate; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    RaRef<CParticleSystem> particleSystem; // 40
    float forcedAutoHideDistance; // 48
    float forcedAutoHideRange; // 4C
};
RED4EXT_ASSERT_SIZE(StaticParticleNode, 0x50);
} // namespace world
using worldStaticParticleNode = world::StaticParticleNode;
} // namespace RED4ext

// clang-format on
