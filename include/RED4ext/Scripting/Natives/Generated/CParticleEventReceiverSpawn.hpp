#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EParticleEventSpawnObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleEvent.hpp>

namespace RED4ext
{
struct CParticleEventReceiverSpawn : IParticleEvent
{
    static constexpr const char* NAME = "CParticleEventReceiverSpawn";
    static constexpr const char* ALIAS = NAME;

    EParticleEventSpawnObject spawnObject; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(CParticleEventReceiverSpawn, 0x88);
} // namespace RED4ext

// clang-format on
