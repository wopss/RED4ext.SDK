#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

namespace RED4ext
{
namespace services { 
struct GameServicesGalaxy
{
    static constexpr const char* NAME = "servicesGameServicesGalaxy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x68 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(GameServicesGalaxy, 0x68);
} // namespace services
} // namespace RED4ext
