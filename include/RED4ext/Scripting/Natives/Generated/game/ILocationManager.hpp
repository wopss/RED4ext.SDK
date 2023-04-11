#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct ILocationManager : game::IGameSystem
{
    static constexpr const char* NAME = "gameILocationManager";
    static constexpr const char* ALIAS = "ILocationManager";

};
RED4EXT_ASSERT_SIZE(ILocationManager, 0x48);
} // namespace game
using gameILocationManager = game::ILocationManager;
using ILocationManager = game::ILocationManager;
} // namespace RED4ext

// clang-format on
