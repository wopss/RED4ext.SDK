#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/fx/CompositionShaderParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompositionTransition.hpp>

namespace RED4ext
{
namespace ink
{
struct CompositionPreset
{
    static constexpr const char* NAME = "inkCompositionPreset";
    static constexpr const char* ALIAS = NAME;

    CName stateName; // 00
    bool useBackgroundTexture; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    fx::CompositionShaderParams shaderParams; // 0C
    uint8_t unkAC[0xB0 - 0xAC]; // AC
    DynArray<ink::CompositionTransition> transitions; // B0
};
RED4EXT_ASSERT_SIZE(CompositionPreset, 0xC0);
} // namespace ink
using inkCompositionPreset = ink::CompositionPreset;
} // namespace RED4ext

// clang-format on
