#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

struct CParticleModificatorDrag : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorDrag";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> dragCoefficient; // 80
    float scale; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(CParticleModificatorDrag, 0x98);
} // namespace RED4ext

// clang-format on
