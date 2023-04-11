#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ELightUnit.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>

namespace RED4ext
{
namespace world
{
struct WorldGlobalLightParameters
{
    static constexpr const char* NAME = "worldWorldGlobalLightParameters";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    ELightUnit unit; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    CurveData<HDRColor> sunColor; // 10
    CurveData<HDRColor> moonColor; // 48
    CurveData<HDRColor> specularTint; // 80
    CurveData<float> sunSize; // B8
    CurveData<float> moonSize; // F0
};
RED4EXT_ASSERT_SIZE(WorldGlobalLightParameters, 0x128);
} // namespace world
using worldWorldGlobalLightParameters = world::WorldGlobalLightParameters;
} // namespace RED4ext

// clang-format on
