#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CharacterManagerVisuals_EntityAppearanceOperationBase.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerVisuals_ChangeEntityAppearance : quest::CharacterManagerVisuals_EntityAppearanceOperationBase
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_ChangeEntityAppearance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_ChangeEntityAppearance, 0xD8);
} // namespace quest
using questCharacterManagerVisuals_ChangeEntityAppearance = quest::CharacterManagerVisuals_ChangeEntityAppearance;
} // namespace RED4ext

// clang-format on
