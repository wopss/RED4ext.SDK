#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationAction.hpp>
#include <RED4ext/Types/generated/red/TagList.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SwitcherOption
{
    static constexpr const char* NAME = "gameuiSwitcherOption";
    static constexpr const char* ALIAS = NAME;

    int32_t index; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName name; // 08
    CString localizedName; // 10
    DynArray<game::ui::CharacterCustomizationAction> actions; // 30
    red::TagList tags; // 40
};
RED4EXT_ASSERT_SIZE(SwitcherOption, 0x50);
} // namespace game::ui
} // namespace RED4ext
