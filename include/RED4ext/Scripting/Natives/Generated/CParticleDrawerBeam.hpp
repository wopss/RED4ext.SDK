#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CParticleDrawerFacingBeam.hpp>

namespace RED4ext
{
struct CParticleDrawerBeam : CParticleDrawerFacingBeam
{
    static constexpr const char* NAME = "CParticleDrawerBeam";
    static constexpr const char* ALIAS = NAME;

    float rotation; // 80
    uint8_t unk84[0x90 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(CParticleDrawerBeam, 0x90);
} // namespace RED4ext
