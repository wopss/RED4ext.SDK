#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/services/GameServicesGalaxy.hpp>

namespace RED4ext
{
namespace services { 
struct GameServices : services::GameServicesGalaxy
{
    static constexpr const char* NAME = "servicesGameServices";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk70[0x2D8 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(GameServices, 0x2D8);
} // namespace services
} // namespace RED4ext
