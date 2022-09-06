#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleInitializer.hpp>

namespace RED4ext
{
struct IEvaluatorVector;

struct CParticleInitializerRotation3D : IParticleInitializer
{
    static constexpr const char* NAME = "CParticleInitializerRotation3D";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorVector> rotation; // 80
};
RED4EXT_ASSERT_SIZE(CParticleInitializerRotation3D, 0x90);
} // namespace RED4ext

// clang-format on
