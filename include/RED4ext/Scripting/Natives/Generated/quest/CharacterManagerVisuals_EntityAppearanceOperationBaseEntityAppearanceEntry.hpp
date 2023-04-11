#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerVisuals_EntityAppearanceOperationBaseEntityAppearanceEntry
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_EntityAppearanceOperationBaseEntityAppearanceEntry";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference puppetRef; // 00
    bool isPlayer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName appearanceName; // 40
};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_EntityAppearanceOperationBaseEntityAppearanceEntry, 0x48);
} // namespace quest
using questCharacterManagerVisuals_EntityAppearanceOperationBaseEntityAppearanceEntry = quest::CharacterManagerVisuals_EntityAppearanceOperationBaseEntityAppearanceEntry;
} // namespace RED4ext

// clang-format on
