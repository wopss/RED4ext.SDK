#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::ui
{
struct IGamepadLightController : game::IGameSystem
{
    static constexpr const char* NAME = "gameuiIGamepadLightController";
    static constexpr const char* ALIAS = "IGamepadLightController";

};
RED4EXT_ASSERT_SIZE(IGamepadLightController, 0x48);
} // namespace game::ui
using gameuiIGamepadLightController = game::ui::IGamepadLightController;
using IGamepadLightController = game::ui::IGamepadLightController;
} // namespace RED4ext

// clang-format on
