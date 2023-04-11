#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PanzerScoreRecordData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SideScrollerMiniGameDynObjectLogicAdvanced.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/VerticalPanelWidgetReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerScoreBoard : game::ui::SideScrollerMiniGameDynObjectLogicAdvanced
{
    static constexpr const char* NAME = "gameuiPanzerScoreBoard";
    static constexpr const char* ALIAS = "PanzerScoreBoard";

    ink::VerticalPanelWidgetReference scoreboardList; // D0
    DynArray<game::ui::PanzerScoreRecordData> champions; // E8
    CName recordWidgetLibraryName; // F8
    uint8_t unk100[0x118 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(PanzerScoreBoard, 0x118);
} // namespace game::ui
using gameuiPanzerScoreBoard = game::ui::PanzerScoreBoard;
using PanzerScoreBoard = game::ui::PanzerScoreBoard;
} // namespace RED4ext

// clang-format on
