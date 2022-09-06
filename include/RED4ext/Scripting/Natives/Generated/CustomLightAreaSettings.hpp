#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct CustomLightAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "CustomLightAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> characterLocalLightRoughnesBias; // 48
};
RED4EXT_ASSERT_SIZE(CustomLightAreaSettings, 0x80);
} // namespace RED4ext

// clang-format on
