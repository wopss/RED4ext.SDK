#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class ModSettingType : int32_t
{
    BooleanToggle = 0,
    FloatSlider = 1,
    IntSlider = 2,
    KeybindsToggle = 3,
    ComboToggle = 4,
};
} // namespace game
using gameModSettingType = game::ModSettingType;
} // namespace RED4ext

// clang-format on
