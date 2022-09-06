#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ETextureAnimationMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

struct CParticleModificatorTextureAnimation : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorTextureAnimation";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> initialFrame; // 80
    Handle<IEvaluatorFloat> animationSpeed; // 90
    ETextureAnimationMode animationMode; // A0
    uint8_t unkA4[0xA8 - 0xA4]; // A4
};
RED4EXT_ASSERT_SIZE(CParticleModificatorTextureAnimation, 0xA8);
} // namespace RED4ext

// clang-format on
