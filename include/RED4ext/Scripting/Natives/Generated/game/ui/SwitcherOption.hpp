#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterRandomizationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SwitcherOption
{
    static constexpr const char* NAME = "gameuiSwitcherOption";
    static constexpr const char* ALIAS = NAME;

    int32_t index; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    DynArray<CName> names; // 08
    CString localizedName; // 18
    DynArray<game::ui::CharacterCustomizationAction> actions; // 38
    red::TagList tags; // 48
    game::ui::CharacterRandomizationInfo randomizationInfo; // 58
};
RED4EXT_ASSERT_SIZE(SwitcherOption, 0x60);
} // namespace game::ui
using gameuiSwitcherOption = game::ui::SwitcherOption;
} // namespace RED4ext

// clang-format on
