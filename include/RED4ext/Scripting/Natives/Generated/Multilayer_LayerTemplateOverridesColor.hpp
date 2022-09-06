#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct Multilayer_LayerTemplateOverridesColor
{
    static constexpr const char* NAME = "Multilayer_LayerTemplateOverridesColor";
    static constexpr const char* ALIAS = NAME;

    CName n; // 00
    NativeArray<float, 3> v; // 08
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(Multilayer_LayerTemplateOverridesColor, 0x18);
} // namespace RED4ext

// clang-format on
