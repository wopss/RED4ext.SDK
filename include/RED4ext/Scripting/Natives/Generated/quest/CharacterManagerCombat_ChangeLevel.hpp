#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/Int32ValueWrapper.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerCombat_ChangeLevel : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_ChangeLevel";
    static constexpr const char* ALIAS = NAME;

    quest::Int32ValueWrapper level; // 70
    bool setExactLevel; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_ChangeLevel, 0x88);
} // namespace quest
using questCharacterManagerCombat_ChangeLevel = quest::CharacterManagerCombat_ChangeLevel;
} // namespace RED4ext

// clang-format on
