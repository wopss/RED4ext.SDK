#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/SwitchPair.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationSystem_OnAppearanceSwitchedEvent : red::Event
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationSystem_OnAppearanceSwitchedEvent";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::SwitchPair> pairs; // 40
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationSystem_OnAppearanceSwitchedEvent, 0x50);
} // namespace game::ui
using gameuiCharacterCustomizationSystem_OnAppearanceSwitchedEvent = game::ui::CharacterCustomizationSystem_OnAppearanceSwitchedEvent;
} // namespace RED4ext

// clang-format on
