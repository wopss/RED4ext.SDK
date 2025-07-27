#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationSystem_OnAppearanceAppliedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationSystem_OnAppearanceAppliedEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CharacterCustomizationSystem_OnAppearanceAppliedEvent, 0x40);
} // namespace game::ui
using gameuiCharacterCustomizationSystem_OnAppearanceAppliedEvent = game::ui::CharacterCustomizationSystem_OnAppearanceAppliedEvent;
} // namespace RED4ext

// clang-format on
