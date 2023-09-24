#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadePlayerController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterPlayerController : game::ui::arcade::ArcadePlayerController
{
    static constexpr const char* NAME = "gameuiarcadeShooterPlayerController";
    static constexpr const char* ALIAS = "ShooterPlayerController";

    uint8_t unk90[0x200 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(ShooterPlayerController, 0x200);
} // namespace game::ui::arcade
using gameuiarcadeShooterPlayerController = game::ui::arcade::ShooterPlayerController;
using ShooterPlayerController = game::ui::arcade::ShooterPlayerController;
} // namespace RED4ext

// clang-format on
