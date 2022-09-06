#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
struct IParticleDrawer : ISerializable
{
    static constexpr const char* NAME = "IParticleDrawer";
    static constexpr const char* ALIAS = NAME;

    float pivotOffset; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(IParticleDrawer, 0x38);
} // namespace RED4ext

// clang-format on
