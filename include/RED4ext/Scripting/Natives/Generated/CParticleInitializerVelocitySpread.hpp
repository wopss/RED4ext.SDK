#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleInitializer.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

struct CParticleInitializerVelocitySpread : IParticleInitializer
{
    static constexpr const char* NAME = "CParticleInitializerVelocitySpread";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> scale; // 80
    bool conserveMomentum; // 90
    uint8_t unk91[0x98 - 0x91]; // 91
};
RED4EXT_ASSERT_SIZE(CParticleInitializerVelocitySpread, 0x98);
} // namespace RED4ext

// clang-format on
