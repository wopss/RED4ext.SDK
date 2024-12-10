#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/CensorshipFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/CharacterRandomizationCategory.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationActionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationEditTag.hpp>

namespace RED4ext
{
namespace game::ui
{
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
    uint8_t unk89[0x90 - 0x89]; // 89
    DynArray<game::ui::CharacterCustomizationEditTag> editTags; // 90
    CensorshipFlags censorFlag; // A0
    game::ui::CharacterCustomizationActionType censorFlagAction; // A4
    DynArray<game::ui::CharacterCustomizationAction> onDeactivateActions; // A8
    game::data::CharacterRandomizationCategory randomizeCategory; // B8
    uint8_t unkBC[0xC0 - 0xBC]; // BC
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationInfo, 0xC0);
} // namespace game::ui
using gameuiCharacterCustomizationInfo = game::ui::CharacterCustomizationInfo;
} // namespace RED4ext

// clang-format on
