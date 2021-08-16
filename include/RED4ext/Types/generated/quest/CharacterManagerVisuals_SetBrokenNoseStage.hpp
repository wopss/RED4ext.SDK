#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/ui/CharacterCustomization_BrokenNoseStage.hpp>
#include <RED4ext/Types/generated/quest/ICharacterManagerVisuals_NodeSubType.hpp>

namespace RED4ext
{
namespace quest { 
struct CharacterManagerVisuals_SetBrokenNoseStage : quest::ICharacterManagerVisuals_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_SetBrokenNoseStage";
    static constexpr const char* ALIAS = NAME;

    game::ui::CharacterCustomization_BrokenNoseStage brokenNoseStage; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_SetBrokenNoseStage, 0x78);
} // namespace quest
} // namespace RED4ext
