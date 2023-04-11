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
struct MuppetInputActionLook : game::IMuppetInputAction
{
    static constexpr const char* NAME = "gameMuppetInputActionLook";
    static constexpr const char* ALIAS = NAME;

    Vector2 rotation; // 08
};
RED4EXT_ASSERT_SIZE(MuppetInputActionLook, 0x10);
} // namespace game
using gameMuppetInputActionLook = game::MuppetInputActionLook;
} // namespace RED4ext

// clang-format on
