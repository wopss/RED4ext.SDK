#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/services/GameServicesGalaxy.hpp>

namespace RED4ext
{
namespace services { 
struct GameServices : services::GameServicesGalaxy
{
    static constexpr const char* NAME = "servicesGameServices";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1A0[0x4D8 - 0x1A0]; // 1A0
};
RED4EXT_ASSERT_SIZE(GameServices, 0x4D8);
} // namespace services
} // namespace RED4ext
