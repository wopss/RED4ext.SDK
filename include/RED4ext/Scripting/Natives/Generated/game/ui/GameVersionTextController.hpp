#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/TextWidgetReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GameVersionTextController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiGameVersionTextController";
    static constexpr const char* ALIAS = NAME;

    ink::TextWidgetReference gameVersionText; // 78
    ink::CompoundWidgetReference expansionWrapper; // 90
    ink::CompoundWidgetReference fluffWrapper; // A8
};
RED4EXT_ASSERT_SIZE(GameVersionTextController, 0xC0);
} // namespace game::ui
using gameuiGameVersionTextController = game::ui::GameVersionTextController;
} // namespace RED4ext

// clang-format on
