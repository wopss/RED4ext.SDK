#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterRandomizationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game::ui
{
struct IndexedAppearanceDefinition
{
    static constexpr const char* NAME = "gameuiIndexedAppearanceDefinition";
    static constexpr const char* ALIAS = NAME;

    int32_t index; // 00
    Color color; // 04
    TweakDBID icon; // 08
    CName name; // 10
    CString localizedName; // 18
    DynArray<game::ui::CharacterCustomizationAction> actions; // 38
    red::TagList tags; // 48
    game::ui::CharacterRandomizationInfo randomizationInfo; // 58
};
RED4EXT_ASSERT_SIZE(IndexedAppearanceDefinition, 0x60);
} // namespace game::ui
using gameuiIndexedAppearanceDefinition = game::ui::IndexedAppearanceDefinition;
} // namespace RED4ext

// clang-format on
