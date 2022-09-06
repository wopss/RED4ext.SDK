#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EParticleEventType.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleEvent.hpp>

namespace RED4ext
{
struct CParticleEventGenerator : IParticleEvent
{
    static constexpr const char* NAME = "CParticleEventGenerator";
    static constexpr const char* ALIAS = NAME;

    EParticleEventType evtType; // 80
    float probability; // 84
    float frequency; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(CParticleEventGenerator, 0x90);
} // namespace RED4ext

// clang-format on
