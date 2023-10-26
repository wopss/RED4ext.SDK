#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldPosition.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) RagdollImpactPointData
{
    static constexpr const char* NAME = "entRagdollImpactPointData";
    static constexpr const char* ALIAS = "RagdollImpactPointData";

    WorldPosition worldPosition; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    Vector4 worldNormal; // 10
    float forceMagnitude; // 20
    float impulseMagnitude; // 24
    float maxForceMagnitude; // 28
    float maxImpulseMagnitude; // 2C
    float velocityChange; // 30
    uint8_t unk34[0x3C - 0x34]; // 34
    uint32_t ragdollProxyActorIndex; // 3C
    uint32_t otherProxyActorIndex; // 40
    uint8_t unk44[0x60 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(RagdollImpactPointData, 0x60);
} // namespace ent
using entRagdollImpactPointData = ent::RagdollImpactPointData;
using RagdollImpactPointData = ent::RagdollImpactPointData;
} // namespace RED4ext

// clang-format on
