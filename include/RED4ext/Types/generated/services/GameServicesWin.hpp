#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/services/GameServices.hpp>

namespace RED4ext
{
namespace services { 
struct GameServicesWin : services::GameServices
{
    static constexpr const char* NAME = "servicesGameServicesWin";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2D8[0x388 - 0x2D8]; // 2D8
};
RED4EXT_ASSERT_SIZE(GameServicesWin, 0x388);
} // namespace services
} // namespace RED4ext
