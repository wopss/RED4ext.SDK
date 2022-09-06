#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/Multilayer_LayerOverrideSelection.hpp>
#include <RED4ext/Scripting/Natives/Generated/Multilayer_LayerTemplateOverrides.hpp>

namespace RED4ext
{
struct CBitmapTexture;

struct Multilayer_LayerTemplate : CResource
{
    static constexpr const char* NAME = "Multilayer_LayerTemplate";
    static constexpr const char* ALIAS = NAME;

    Multilayer_LayerTemplateOverrides overrides; // 40
    Multilayer_LayerOverrideSelection defaultOverrides; // A0
    Ref<CBitmapTexture> colorTexture; // D0
    Ref<CBitmapTexture> normalTexture; // E8
    Ref<CBitmapTexture> roughnessTexture; // 100
    Ref<CBitmapTexture> metalnessTexture; // 118
    float tilingMultiplier; // 130
    NativeArray<float, 2> colorMaskLevelsIn; // 134
    NativeArray<float, 2> colorMaskLevelsOut; // 13C
    uint8_t unk144[0x148 - 0x144]; // 144
};
RED4EXT_ASSERT_SIZE(Multilayer_LayerTemplate, 0x148);
} // namespace RED4ext

// clang-format on
