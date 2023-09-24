#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ArcadeObjectController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterObjectController : game::ui::arcade::ArcadeObjectController
{
    static constexpr const char* NAME = "gameuiarcadeShooterObjectController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x120 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(ShooterObjectController, 0x120);
} // namespace game::ui::arcade
using gameuiarcadeShooterObjectController = game::ui::arcade::ShooterObjectController;
} // namespace RED4ext

// clang-format on
