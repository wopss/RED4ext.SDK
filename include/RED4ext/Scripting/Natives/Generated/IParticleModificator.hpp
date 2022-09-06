#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleInitializer.hpp>

namespace RED4ext
{
struct IParticleModificator : IParticleInitializer
{
    static constexpr const char* NAME = "IParticleModificator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IParticleModificator, 0x80);
} // namespace RED4ext

// clang-format on
