#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct Multilayer_LayerTemplateOverridesLevels
{
    static constexpr const char* NAME = "Multilayer_LayerTemplateOverridesLevels";
    static constexpr const char* ALIAS = NAME;

    CName n; // 00
    NativeArray<float, 2> v; // 08
};
RED4EXT_ASSERT_SIZE(Multilayer_LayerTemplateOverridesLevels, 0x10);
} // namespace RED4ext

// clang-format on
