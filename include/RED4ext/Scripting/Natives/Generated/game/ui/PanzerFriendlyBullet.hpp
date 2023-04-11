#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PanzerBullet.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerFriendlyBullet : game::ui::PanzerBullet
{
    static constexpr const char* NAME = "gameuiPanzerFriendlyBullet";
    static constexpr const char* ALIAS = "PanzerFriendlyBullet";

};
RED4EXT_ASSERT_SIZE(PanzerFriendlyBullet, 0xD0);
} // namespace game::ui
using gameuiPanzerFriendlyBullet = game::ui::PanzerFriendlyBullet;
using PanzerFriendlyBullet = game::ui::PanzerFriendlyBullet;
} // namespace RED4ext

// clang-format on
