#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatusEffectListener.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterStatusEffectsListener : game::IStatusEffectListener
{
    static constexpr const char* NAME = "questCharacterStatusEffectsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CharacterStatusEffectsListener, 0x48);
} // namespace quest
using questCharacterStatusEffectsListener = quest::CharacterStatusEffectsListener;
} // namespace RED4ext

// clang-format on
