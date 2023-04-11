#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CensorshipInfo.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CustomizationMorph : game::ui::CensorshipInfo
{
    static constexpr const char* NAME = "gameuiCustomizationMorph";
    static constexpr const char* ALIAS = NAME;

    CName regionName; // 10
    CName targetName; // 18
};
RED4EXT_ASSERT_SIZE(CustomizationMorph, 0x20);
} // namespace game::ui
using gameuiCustomizationMorph = game::ui::CustomizationMorph;
} // namespace RED4ext

// clang-format on
