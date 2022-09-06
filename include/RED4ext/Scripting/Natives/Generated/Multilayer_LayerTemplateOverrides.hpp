#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Multilayer_LayerTemplateOverridesColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/Multilayer_LayerTemplateOverridesLevels.hpp>
#include <RED4ext/Scripting/Natives/Generated/Multilayer_LayerTemplateOverridesNormalStrength.hpp>

namespace RED4ext
{
struct Multilayer_LayerTemplateOverrides
{
    static constexpr const char* NAME = "Multilayer_LayerTemplateOverrides";
    static constexpr const char* ALIAS = NAME;

    DynArray<Multilayer_LayerTemplateOverridesColor> colorScale; // 00
    DynArray<Multilayer_LayerTemplateOverridesLevels> roughLevelsIn; // 10
    DynArray<Multilayer_LayerTemplateOverridesLevels> roughLevelsOut; // 20
    DynArray<Multilayer_LayerTemplateOverridesLevels> metalLevelsIn; // 30
    DynArray<Multilayer_LayerTemplateOverridesLevels> metalLevelsOut; // 40
    DynArray<Multilayer_LayerTemplateOverridesNormalStrength> normalStrength; // 50
};
RED4EXT_ASSERT_SIZE(Multilayer_LayerTemplateOverrides, 0x60);
} // namespace RED4ext

// clang-format on
