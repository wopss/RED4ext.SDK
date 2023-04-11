#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IChoiceVisualizer.hpp>

namespace RED4ext
{
namespace game::ui
{
struct DialogListChoiceVisualizer : game::ui::IChoiceVisualizer
{
    static constexpr const char* NAME = "gameuiDialogListChoiceVisualizer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DialogListChoiceVisualizer, 0x30);
} // namespace game::ui
using gameuiDialogListChoiceVisualizer = game::ui::DialogListChoiceVisualizer;
} // namespace RED4ext

// clang-format on
