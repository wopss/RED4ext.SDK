#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/services/GameServicesGalaxy.hpp>

namespace RED4ext
{
namespace services
{
struct GameServices : services::GameServicesGalaxy
{
    static constexpr const char* NAME = "servicesGameServices";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1F0[0x640 - 0x1F0]; // 1F0
};
RED4EXT_ASSERT_SIZE(GameServices, 0x640);
} // namespace services
using servicesGameServices = services::GameServices;
} // namespace RED4ext

// clang-format on
