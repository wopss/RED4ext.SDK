#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::data { struct MiniGame_Trap_Record; }

namespace game::ui
{
struct TrapTooltipDisplayer : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTrapTooltipDisplayer";
    static constexpr const char* ALIAS = "TrapTooltipDisplayer";

    WeakHandle<game::data::MiniGame_Trap_Record> trap; // 78
};
RED4EXT_ASSERT_SIZE(TrapTooltipDisplayer, 0x88);
} // namespace game::ui
using gameuiTrapTooltipDisplayer = game::ui::TrapTooltipDisplayer;
using TrapTooltipDisplayer = game::ui::TrapTooltipDisplayer;
} // namespace RED4ext

// clang-format on
