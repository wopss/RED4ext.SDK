#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CParticleDrawerTrail : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerTrail";
    static constexpr const char* ALIAS = NAME;

    float texturesPerUnit; // 38
    bool dynamicTexCoords; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
    int32_t minSegmentsPer360Degrees; // 40
    bool ribbonize; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
    float ribbonTesselationDelta; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(CParticleDrawerTrail, 0x50);
} // namespace RED4ext

// clang-format on
