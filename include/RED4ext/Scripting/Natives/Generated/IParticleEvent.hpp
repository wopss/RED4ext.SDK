#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModule.hpp>

namespace RED4ext
{
struct IParticleEvent : IParticleModule
{
    static constexpr const char* NAME = "IParticleEvent";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 78
};
RED4EXT_ASSERT_SIZE(IParticleEvent, 0x80);
} // namespace RED4ext

// clang-format on
