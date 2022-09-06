#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CParticleDrawerBillboard : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerBillboard";
    static constexpr const char* ALIAS = NAME;

    bool isGPUBased; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(CParticleDrawerBillboard, 0x40);
} // namespace RED4ext

// clang-format on
