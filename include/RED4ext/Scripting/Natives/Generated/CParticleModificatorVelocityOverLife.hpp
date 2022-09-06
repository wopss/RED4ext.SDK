#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct IEvaluatorVector;

struct CParticleModificatorVelocityOverLife : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorVelocityOverLife";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> velocity; // 80
    float scale; // 90
    bool modulate; // 94
    bool absolute; // 95
    uint8_t unk96[0x98 - 0x96]; // 96
};
RED4EXT_ASSERT_SIZE(CParticleModificatorVelocityOverLife, 0x98);
} // namespace RED4ext

// clang-format on
