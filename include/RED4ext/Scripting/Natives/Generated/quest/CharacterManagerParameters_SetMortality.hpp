#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/GodModeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerParameters_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerParameters_SetMortality : quest::ICharacterManagerParameters_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerParameters_SetMortality";
    static constexpr const char* ALIAS = NAME;

    game::GodModeType state; // 70
    bool resetToDefault; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
    CName source; // 78
    uint8_t unk80[0x88 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(CharacterManagerParameters_SetMortality, 0x88);
} // namespace quest
using questCharacterManagerParameters_SetMortality = quest::CharacterManagerParameters_SetMortality;
} // namespace RED4ext

// clang-format on
