#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomizationPart.hpp>

namespace RED4ext
{
namespace game::ui { struct CharacterCustomizationInfo; }

namespace game::ui { 
struct CharacterCustomizationOption : IScriptable
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationOption";
    static constexpr const char* ALIAS = "CharacterCustomizationOption";

    Handle<game::ui::CharacterCustomizationInfo> info; // 40
    game::ui::CharacterCustomizationPart bodyPart; // 50
    uint32_t prevIndex; // 54
    uint32_t currIndex; // 58
    bool isActive; // 5C
    bool isCensored; // 5D
    uint8_t unk5E[0x60 - 0x5E]; // 5E
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationOption, 0x60);
} // namespace game::ui
using CharacterCustomizationOption = game::ui::CharacterCustomizationOption;
} // namespace RED4ext
