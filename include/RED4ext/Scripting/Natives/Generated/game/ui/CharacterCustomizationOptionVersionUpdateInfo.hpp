#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CharacterCustomizationOptionVersionUpdateInfo
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationOptionVersionUpdateInfo";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> curOptionNames; // 00
    CName curDefintionName; // 10
    CName newOptionName; // 18
    CName newDefinitionName; // 20
    bool replaceCurOption; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationOptionVersionUpdateInfo, 0x30);
} // namespace game::ui
} // namespace RED4ext
