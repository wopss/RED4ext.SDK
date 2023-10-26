#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterAIController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct __declspec(align(0x10)) ShooterAIVIPController : game::ui::arcade::ShooterAIController
{
    static constexpr const char* NAME = "gameuiarcadeShooterAIVIPController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk280[0x290 - 0x280]; // 280
};
RED4EXT_ASSERT_SIZE(ShooterAIVIPController, 0x290);
} // namespace game::ui::arcade
using gameuiarcadeShooterAIVIPController = game::ui::arcade::ShooterAIVIPController;
} // namespace RED4ext

// clang-format on
