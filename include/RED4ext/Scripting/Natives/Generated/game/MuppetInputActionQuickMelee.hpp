#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IMuppetInputAction.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetInputActionQuickMelee : game::IMuppetInputAction
{
    static constexpr const char* NAME = "gameMuppetInputActionQuickMelee";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MuppetInputActionQuickMelee, 0x8);
} // namespace game
using gameMuppetInputActionQuickMelee = game::MuppetInputActionQuickMelee;
} // namespace RED4ext

// clang-format on
