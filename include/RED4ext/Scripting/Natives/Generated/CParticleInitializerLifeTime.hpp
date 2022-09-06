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

struct CParticleInitializerLifeTime : IParticleInitializer
{
    static constexpr const char* NAME = "CParticleInitializerLifeTime";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> lifeTime; // 80
};
RED4EXT_ASSERT_SIZE(CParticleInitializerLifeTime, 0x90);
} // namespace RED4ext

// clang-format on
