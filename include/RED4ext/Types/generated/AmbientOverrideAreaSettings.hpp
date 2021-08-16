#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/HDRColor.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>

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
