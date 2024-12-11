#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SwitcherOption.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SwitcherInfo : game::ui::CharacterCustomizationInfo
{
    static constexpr const char* NAME = "gameuiSwitcherInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> uiSlots; // C0
    DynArray<game::ui::SwitcherOption> options; // D0
    bool switchVisibility; // E0
    uint8_t unkE1[0xE8 - 0xE1]; // E1
};
RED4EXT_ASSERT_SIZE(SwitcherInfo, 0xE8);
} // namespace game::ui
using gameuiSwitcherInfo = game::ui::SwitcherInfo;
} // namespace RED4ext

// clang-format on
