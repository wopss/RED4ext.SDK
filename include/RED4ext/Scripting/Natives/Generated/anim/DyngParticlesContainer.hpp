#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/DyngParticle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct DyngParticlesContainer
{
    static constexpr const char* NAME = "animDyngParticlesContainer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x4 - 0x0]; // 0
    float gravityWS; // 04
    Vector3 externalForceWS; // 08
    uint8_t unk14[0x18 - 0x14]; // 14
    anim::VectorLink externalForceWsLink; // 18
    DynArray<anim::DyngParticle> particles; // 38
    uint8_t unk48[0xC0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DyngParticlesContainer, 0xC0);
} // namespace anim
using animDyngParticlesContainer = anim::DyngParticlesContainer;
} // namespace RED4ext

// clang-format on
