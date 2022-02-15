#pragma once

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
    uint8_t unk54[0x68 - 0x54]; // 54
    float simulationSpeed; // 68
    uint8_t unk6C[0x98 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CRenderSimWaterImpulse, 0x98);
} // namespace RED4ext
