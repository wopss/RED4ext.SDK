#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct Multilayer_LayerTemplateOverridesNormalStrength
{
    static constexpr const char* NAME = "Multilayer_LayerTemplateOverridesNormalStrength";
    static constexpr const char* ALIAS = NAME;

    CName n; // 00
    float v; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(Multilayer_LayerTemplateOverridesNormalStrength, 0x10);
} // namespace RED4ext

// clang-format on
