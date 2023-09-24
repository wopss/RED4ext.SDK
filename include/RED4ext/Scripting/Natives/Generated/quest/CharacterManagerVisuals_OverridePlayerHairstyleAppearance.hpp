#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerVisuals_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerVisuals_OverridePlayerHairstyleAppearance : quest::ICharacterManagerVisuals_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_OverridePlayerHairstyleAppearance";
    static constexpr const char* ALIAS = NAME;

    uint32_t hairstyleIndex; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    CName hairstyleDefinitionName; // 78
    uint32_t beardIndex; // 80
    uint32_t beardPartIndex; // 84
    CName beardDefinitionName; // 88
};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_OverridePlayerHairstyleAppearance, 0x90);
} // namespace quest
using questCharacterManagerVisuals_OverridePlayerHairstyleAppearance = quest::CharacterManagerVisuals_OverridePlayerHairstyleAppearance;
} // namespace RED4ext

// clang-format on
