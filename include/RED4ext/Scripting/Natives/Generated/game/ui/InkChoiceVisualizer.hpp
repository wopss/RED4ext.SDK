#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ChoiceListVisualizerType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IChoiceVisualizer.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InkChoiceVisualizer : game::ui::IChoiceVisualizer
{
    static constexpr const char* NAME = "gameuiInkChoiceVisualizer";
    static constexpr const char* ALIAS = NAME;

    bool isDynamic; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    game::ui::ChoiceListVisualizerType type; // 34
};
RED4EXT_ASSERT_SIZE(InkChoiceVisualizer, 0x38);
} // namespace game::ui
using gameuiInkChoiceVisualizer = game::ui::InkChoiceVisualizer;
} // namespace RED4ext

// clang-format on
