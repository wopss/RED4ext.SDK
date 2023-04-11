#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game::gps
{
struct Settings
{
    static constexpr const char* NAME = "gamegpsSettings";
    static constexpr const char* ALIAS = "GPSSettings";

    RaRef<world::Effect> lineEffectOnFoot; // 00
    RaRef<world::Effect> lineEffectVehicle; // 08
    Vector3 fixedPathOffset; // 10
    Vector3 fixedPortalMappinOffset; // 1C
    float pathRefreshTimeInterval; // 28
    float lastPlayerNavmeshPositionRefreshTimeIntervalSecs; // 2C
    float maxPathDisplayLength; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(Settings, 0x38);
} // namespace game::gps
using gamegpsSettings = game::gps::Settings;
using GPSSettings = game::gps::Settings;
} // namespace RED4ext

// clang-format on
