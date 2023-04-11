#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CustomizationAppearance.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CustomizationMorph.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CustomizationGroup
{
    static constexpr const char* NAME = "gameuiCustomizationGroup";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    DynArray<game::ui::CustomizationAppearance> customization; // 08
    DynArray<game::ui::CustomizationMorph> morphs; // 18
};
RED4EXT_ASSERT_SIZE(CustomizationGroup, 0x28);
} // namespace game::ui
using gameuiCustomizationGroup = game::ui::CustomizationGroup;
} // namespace RED4ext

// clang-format on
