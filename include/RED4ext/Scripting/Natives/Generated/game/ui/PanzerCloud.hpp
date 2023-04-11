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
struct PanzerCloud : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerCloud";
    static constexpr const char* ALIAS = "PanzerCloud";

};
RED4EXT_ASSERT_SIZE(PanzerCloud, 0xD0);
} // namespace game::ui
using gameuiPanzerCloud = game::ui::PanzerCloud;
using PanzerCloud = game::ui::PanzerCloud;
} // namespace RED4ext

// clang-format on
