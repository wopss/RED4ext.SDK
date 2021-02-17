#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/IParticleModificator.hpp>
#include <RED4ext/Types/generated/Vector2.hpp>

namespace RED4ext
{
struct CParticleModificatorAlphaByDistance : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorAlphaByDistance";
    static constexpr const char* ALIAS = NAME;

    Vector2 nearBlendDistance; // 80
    Vector2 farBlendDistance; // 88
};
RED4EXT_ASSERT_SIZE(CParticleModificatorAlphaByDistance, 0x90);
} // namespace RED4ext
