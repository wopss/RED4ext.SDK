#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleCollisionMapItem
{
    static constexpr const char* NAME = "audioVehicleCollisionMapItem";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName impactEvent; // 08
    CName scrapingLoopStart; // 10
    CName scrapingLoopEnd; // 18
};
RED4EXT_ASSERT_SIZE(VehicleCollisionMapItem, 0x20);
} // namespace audio
using audioVehicleCollisionMapItem = audio::VehicleCollisionMapItem;
} // namespace RED4ext

// clang-format on
