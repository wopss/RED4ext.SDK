#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CParticleDrawerEmitterOrientation : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerEmitterOrientation";
    static constexpr const char* ALIAS = NAME;

    EulerAngles coordinateSystem; // 38
    bool isGPUBased; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(CParticleDrawerEmitterOrientation, 0x48);
} // namespace RED4ext

// clang-format on
