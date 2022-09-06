#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IDynamicTextureGenerator.hpp>

namespace RED4ext
{
struct CRenderSimWaterImpulse : IDynamicTextureGenerator
{
    static constexpr const char* NAME = "CRenderSimWaterImpulse";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x50 - 0x38]; // 38
    int32_t resolution; // 50
    uint8_t unk54[0x64 - 0x54]; // 54
    float simulationSpeed; // 64
    uint8_t unk68[0xA8 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(CRenderSimWaterImpulse, 0xA8);
} // namespace RED4ext

// clang-format on
