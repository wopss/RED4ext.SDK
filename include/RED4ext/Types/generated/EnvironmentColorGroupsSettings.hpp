#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/HDRColor.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>

namespace RED4ext
{
struct EnvironmentColorGroupsSettings : IAreaSettings
{
    static constexpr const char* NAME = "EnvironmentColorGroupsSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<HDRColor> skyTint; // 48
    NativeArray<CurveData<HDRColor>, 16> colorGroup; // 80
};
RED4EXT_ASSERT_SIZE(EnvironmentColorGroupsSettings, 0x400);
} // namespace RED4ext
