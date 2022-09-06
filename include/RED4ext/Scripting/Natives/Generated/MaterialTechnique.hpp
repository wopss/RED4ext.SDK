#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/FeatureFlagsMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/MaterialPass.hpp>

namespace RED4ext
{
struct MaterialTechnique
{
    static constexpr const char* NAME = "MaterialTechnique";
    static constexpr const char* ALIAS = NAME;

    DynArray<MaterialPass> passes; // 00
    FeatureFlagsMask featureFlagsEnabledMask; // 10
    uint32_t streamsToBind; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(MaterialTechnique, 0x20);
} // namespace RED4ext

// clang-format on
