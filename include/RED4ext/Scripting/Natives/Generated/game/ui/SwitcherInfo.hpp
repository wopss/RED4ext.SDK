#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SwitcherOption.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SwitcherInfo : game::ui::CharacterCustomizationInfo
{
    static constexpr const char* NAME = "gameuiSwitcherInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::SwitcherOption> options; // A8
    bool switchVisibility; // B8
    uint8_t unkB9[0xC0 - 0xB9]; // B9
};
RED4EXT_ASSERT_SIZE(SwitcherInfo, 0xC0);
} // namespace game::ui
} // namespace RED4ext
