#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct WindAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "WindAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> strength; // 48
    CurveData<Vector4> direction; // 80
};
RED4EXT_ASSERT_SIZE(WindAreaSettings, 0xB8);
} // namespace RED4ext

// clang-format on
