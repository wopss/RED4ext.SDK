#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct ParticleBurst
{
    static constexpr const char* NAME = "rendParticleBurst";
    static constexpr const char* ALIAS = NAME;

    float burstTime; // 00
    uint32_t spawnCount; // 04
    float spawnTimeRange; // 08
    float repeatTime; // 0C
};
RED4EXT_ASSERT_SIZE(ParticleBurst, 0x10);
} // namespace rend
using rendParticleBurst = rend::ParticleBurst;
} // namespace RED4ext

// clang-format on
