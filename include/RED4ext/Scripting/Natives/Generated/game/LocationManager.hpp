#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ILocationManager.hpp>

namespace RED4ext
{
namespace game
{
struct LocationManager : game::ILocationManager
{
    static constexpr const char* NAME = "gameLocationManager";
    static constexpr const char* ALIAS = "LocationManager";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(LocationManager, 0x58);
} // namespace game
using gameLocationManager = game::LocationManager;
using LocationManager = game::LocationManager;
} // namespace RED4ext

// clang-format on
