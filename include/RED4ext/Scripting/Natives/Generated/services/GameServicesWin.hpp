#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/services/GameServices.hpp>

namespace RED4ext
{
namespace services { 
struct GameServicesWin : services::GameServices
{
    static constexpr const char* NAME = "servicesGameServicesWin";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk4D8[0x588 - 0x4D8]; // 4D8
};
RED4EXT_ASSERT_SIZE(GameServicesWin, 0x588);
} // namespace services
} // namespace RED4ext
