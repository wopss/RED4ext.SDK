#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerBullet : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerBullet";
    static constexpr const char* ALIAS = "PanzerBullet";

};
RED4EXT_ASSERT_SIZE(PanzerBullet, 0xD0);
} // namespace game::ui
using gameuiPanzerBullet = game::ui::PanzerBullet;
using PanzerBullet = game::ui::PanzerBullet;
} // namespace RED4ext

// clang-format on
