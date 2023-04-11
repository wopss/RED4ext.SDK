#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerScoreRecord : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiPanzerScoreRecord";
    static constexpr const char* ALIAS = "PanzerScoreRecord";

    ink::TextWidgetReference nameWidget; // 78
    ink::TextWidgetReference scoreWidget; // 90
};
RED4EXT_ASSERT_SIZE(PanzerScoreRecord, 0xA8);
} // namespace game::ui
using gameuiPanzerScoreRecord = game::ui::PanzerScoreRecord;
using PanzerScoreRecord = game::ui::PanzerScoreRecord;
} // namespace RED4ext

// clang-format on
