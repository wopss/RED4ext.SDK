#pragma once

// clang-format off

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

    uint8_t unk600[0x710 - 0x600]; // 600
};
RED4EXT_ASSERT_SIZE(GameServicesWin, 0x710);
} // namespace services
} // namespace RED4ext

// clang-format on
