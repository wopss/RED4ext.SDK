#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/PhysicsParticleInitializer.hpp>

namespace RED4ext
{
struct VelocitySpreadEvaluator : PhysicsParticleInitializer
{
    static constexpr const char* NAME = "VelocitySpreadEvaluator";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x50 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(VelocitySpreadEvaluator, 0x50);
} // namespace RED4ext

// clang-format on
