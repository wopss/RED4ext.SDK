#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct AmbientOverrideAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "AmbientOverrideAreaSettings";
    static constexpr const char* ALIAS = NAME;

    NativeArray<CurveData<HDRColor>, 6> color; // 48
};
RED4EXT_ASSERT_SIZE(AmbientOverrideAreaSettings, 0x198);
} // namespace RED4ext

// clang-format on
