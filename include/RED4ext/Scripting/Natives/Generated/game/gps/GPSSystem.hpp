#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/gps/IGPSSystem.hpp>

namespace RED4ext
{
namespace game::gps
{
struct GPSSystem : game::gps::IGPSSystem
{
    static constexpr const char* NAME = "gamegpsGPSSystem";
    static constexpr const char* ALIAS = "GPSSystem";

    uint8_t unk48[0x440 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GPSSystem, 0x440);
} // namespace game::gps
using gamegpsGPSSystem = game::gps::GPSSystem;
using GPSSystem = game::gps::GPSSystem;
} // namespace RED4ext

// clang-format on
