#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMuppetInputAction.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInputActionSelectWeapon : game::IMuppetInputAction
{
    static constexpr const char* NAME = "gameMuppetInputActionSelectWeapon";
    static constexpr const char* ALIAS = NAME;

    ItemID wantedWeapon; // 08
};
RED4EXT_ASSERT_SIZE(MuppetInputActionSelectWeapon, 0x18);
} // namespace game
using gameMuppetInputActionSelectWeapon = game::MuppetInputActionSelectWeapon;
} // namespace RED4ext

// clang-format on
