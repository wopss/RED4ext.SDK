#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/CharacterCustomizationOptionVersionPrereq.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationOptionVersionUpdateInfo
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationOptionVersionUpdateInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> curOptionNames; // 00
    DynArray<game::ui::CharacterCustomizationOptionVersionPrereq> optionPrereqs; // 10
    CName curDefintionName; // 20
    CName newOptionName; // 28
    CName newDefinitionName; // 30
    bool replaceCurOption; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationOptionVersionUpdateInfo, 0x40);
} // namespace game::ui
using gameuiCharacterCustomizationOptionVersionUpdateInfo = game::ui::CharacterCustomizationOptionVersionUpdateInfo;
} // namespace RED4ext

// clang-format on
