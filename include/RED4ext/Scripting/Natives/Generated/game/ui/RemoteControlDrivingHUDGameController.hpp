#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RemoteControlDrivingHUDGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiRemoteControlDrivingHUDGameController";
    static constexpr const char* ALIAS = "RemoteControlDrivingHUDGameController";

};
RED4EXT_ASSERT_SIZE(RemoteControlDrivingHUDGameController, 0xF8);
} // namespace game::ui
using gameuiRemoteControlDrivingHUDGameController = game::ui::RemoteControlDrivingHUDGameController;
using RemoteControlDrivingHUDGameController = game::ui::RemoteControlDrivingHUDGameController;
} // namespace RED4ext

// clang-format on
