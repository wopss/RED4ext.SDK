#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEmitterGroup.hpp>

namespace RED4ext
{
struct EmitterGroupParams
{
    static constexpr const char* NAME = "EmitterGroupParams";
    static constexpr const char* ALIAS = NAME;

    EEmitterGroup group; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float emissionScale; // 04
    float opacityScale; // 08
};
RED4EXT_ASSERT_SIZE(EmitterGroupParams, 0xC);
} // namespace RED4ext

// clang-format on
