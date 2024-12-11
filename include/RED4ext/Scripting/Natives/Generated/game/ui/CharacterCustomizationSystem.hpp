#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/ICharacterCustomizationSystem.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CharacterCustomizationSystem : game::ui::ICharacterCustomizationSystem
{
    static constexpr const char* NAME = "gameuiCharacterCustomizationSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x398 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CharacterCustomizationSystem, 0x398);
} // namespace game::ui
using gameuiCharacterCustomizationSystem = game::ui::CharacterCustomizationSystem;
} // namespace RED4ext

// clang-format on
