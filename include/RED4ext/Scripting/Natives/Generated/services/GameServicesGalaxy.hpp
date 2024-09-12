#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace services
{
struct GameServicesGalaxy
{
    static constexpr const char* NAME = "servicesGameServicesGalaxy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x1F8 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(GameServicesGalaxy, 0x1F8);
} // namespace services
using servicesGameServicesGalaxy = services::GameServicesGalaxy;
} // namespace RED4ext

// clang-format on
