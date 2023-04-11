#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMuppetInputAction.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInputActionMoveForward : game::IMuppetInputAction
{
    static constexpr const char* NAME = "gameMuppetInputActionMoveForward";
    static constexpr const char* ALIAS = NAME;

    Vector2 direction; // 08
    bool isSprinting; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(MuppetInputActionMoveForward, 0x18);
} // namespace game
using gameMuppetInputActionMoveForward = game::MuppetInputActionMoveForward;
} // namespace RED4ext

// clang-format on
