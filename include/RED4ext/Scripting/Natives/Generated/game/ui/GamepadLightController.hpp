#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IGamepadLightController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GamepadLightController : game::ui::IGamepadLightController
{
    static constexpr const char* NAME = "gameuiGamepadLightController";
    static constexpr const char* ALIAS = "GamepadLightController";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(GamepadLightController, 0x50);
} // namespace game::ui
using gameuiGamepadLightController = game::ui::GamepadLightController;
using GamepadLightController = game::ui::GamepadLightController;
} // namespace RED4ext

// clang-format on
