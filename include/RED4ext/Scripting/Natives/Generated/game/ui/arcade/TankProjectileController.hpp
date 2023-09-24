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
struct TankProjectileController : game::ui::arcade::ArcadeObjectController
{
    static constexpr const char* NAME = "gameuiarcadeTankProjectileController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x108 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(TankProjectileController, 0x108);
} // namespace game::ui::arcade
using gameuiarcadeTankProjectileController = game::ui::arcade::TankProjectileController;
} // namespace RED4ext

// clang-format on
