#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
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

    DynArray<CName> uiSlots; // B8
    DynArray<game::ui::SwitcherOption> options; // C8
    bool switchVisibility; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
};
RED4EXT_ASSERT_SIZE(SwitcherInfo, 0xE0);
} // namespace game::ui
} // namespace RED4ext
