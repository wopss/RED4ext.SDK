#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EEmitterGroup.hpp>

namespace RED4ext
{
struct EmitterGroupAreaParams
{
    static constexpr const char* NAME = "EmitterGroupAreaParams";
    static constexpr const char* ALIAS = NAME;

    EEmitterGroup group; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    CurveData<float> emissionScale; // 08
    CurveData<float> opacityScale; // 40
};
RED4EXT_ASSERT_SIZE(EmitterGroupAreaParams, 0x78);
} // namespace RED4ext

// clang-format on
