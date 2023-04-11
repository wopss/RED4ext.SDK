#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ProxWindowsType.hpp>

namespace RED4ext
{
namespace world
{
struct ProxyWindowsParams
{
    static constexpr const char* NAME = "worldProxyWindowsParams";
    static constexpr const char* ALIAS = NAME;

    world::ProxWindowsType windowsType; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float distance; // 04
    float distanceAboveProxy; // 08
    bool boolean; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
    float removeSmallerThan; // 10
    float distantWindowsEmissive; // 14
    float distantWindowsSize; // 18
    float distantWindowsSaturation; // 1C
    float distantWindowsTurnedOf; // 20
};
RED4EXT_ASSERT_SIZE(ProxyWindowsParams, 0x24);
} // namespace world
using worldProxyWindowsParams = world::ProxyWindowsParams;
} // namespace RED4ext

// clang-format on
