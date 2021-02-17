#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/services/GameServices.hpp>

namespace RED4ext
{
namespace services { 
struct GameServicesWin : services::GameServices
{
    static constexpr const char* NAME = "servicesGameServicesWin";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2D0[0x380 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(GameServicesWin, 0x380);
} // namespace services
} // namespace RED4ext
