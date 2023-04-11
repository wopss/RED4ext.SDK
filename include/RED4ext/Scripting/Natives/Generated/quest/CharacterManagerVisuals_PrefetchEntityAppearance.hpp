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
struct CharacterManagerVisuals_PrefetchEntityAppearance : quest::CharacterManagerVisuals_EntityAppearanceOperationBase
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_PrefetchEntityAppearance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_PrefetchEntityAppearance, 0xD8);
} // namespace quest
using questCharacterManagerVisuals_PrefetchEntityAppearance = quest::CharacterManagerVisuals_PrefetchEntityAppearance;
} // namespace RED4ext

// clang-format on
