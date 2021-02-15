#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CensorshipFlags.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationAction.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationActionType.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationInfo : IScriptable
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationInfo";
    static constexpr const char* ALIAS = NAME;

    CName name; // 40
    CName uiSlot; // 48
    CString localizedName; // 50
    int32_t defaultIndex; // 70
    int32_t index; // 74
    bool hidden; // 78
    bool enabled; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
    CName link; // 80
    bool linkController; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    CensorshipFlags censorFlag; // 8C
    game::ui::CharacterCustomizationActionType censorFlagAction; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
    DynArray<game::ui::CharacterCustomizationAction> onDeactivateActions; // 98
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationInfo, 0xA8);
} // namespace game::ui
} // namespace RED4ext
