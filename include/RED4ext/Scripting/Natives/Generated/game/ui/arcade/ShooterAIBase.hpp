#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterObjectController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct __declspec(align(0x10)) ShooterAIBase : game::ui::arcade::ShooterObjectController
{
    static constexpr const char* NAME = "gameuiarcadeShooterAIBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x260 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(ShooterAIBase, 0x260);
} // namespace game::ui::arcade
using gameuiarcadeShooterAIBase = game::ui::arcade::ShooterAIBase;
} // namespace RED4ext

// clang-format on
