#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/HDRColor.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>

namespace RED4ext
{
struct GlobalLightOverrideAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "GlobalLightOverrideAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<HDRColor> color; // 48
    float lightAzimuth; // 80
    float lightElevation; // 84
};
RED4EXT_ASSERT_SIZE(GlobalLightOverrideAreaSettings, 0x88);
} // namespace RED4ext
