#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct LightGroupsAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "LightGroupsAreaSettings";
    static constexpr const char* ALIAS = NAME;

    NativeArray<CurveData<float>, 8> groupFade; // 48
};
RED4EXT_ASSERT_SIZE(LightGroupsAreaSettings, 0x208);
} // namespace RED4ext

// clang-format on
