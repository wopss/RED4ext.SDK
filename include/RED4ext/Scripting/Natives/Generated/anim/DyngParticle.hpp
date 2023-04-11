#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DyngParticleProjectionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct DyngParticle
{
    static constexpr const char* NAME = "animDyngParticle";
    static constexpr const char* ALIAS = NAME;

    float mass; // 00
    float damping; // 04
    float pullForceFactor; // 08
    bool isFree; // 0C
    uint8_t unk0D[0x18 - 0xD]; // D
    anim::TransformIndex bone; // 18
    float collisionCapsuleRadius; // 30
    float collisionCapsuleHeightExtent; // 34
    Vector3 collisionCapsuleAxisLS; // 38
    anim::DyngParticleProjectionType projectionType; // 44
    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DyngParticle, 0xB8);
} // namespace anim
using animDyngParticle = anim::DyngParticle;
} // namespace RED4ext

// clang-format on
