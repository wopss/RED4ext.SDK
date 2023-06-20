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

    uint8_t unk240[0x658 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(GameServices, 0x658);
} // namespace services
using servicesGameServices = services::GameServices;
} // namespace RED4ext

// clang-format on
