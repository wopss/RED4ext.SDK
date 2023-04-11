#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PanzerBonus.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerLifeBonus : game::ui::PanzerBonus
{
    static constexpr const char* NAME = "gameuiPanzerLifeBonus";
    static constexpr const char* ALIAS = "PanzerLifeBonus";

};
RED4EXT_ASSERT_SIZE(PanzerLifeBonus, 0xE8);
} // namespace game::ui
using gameuiPanzerLifeBonus = game::ui::PanzerLifeBonus;
using PanzerLifeBonus = game::ui::PanzerLifeBonus;
} // namespace RED4ext

// clang-format on
