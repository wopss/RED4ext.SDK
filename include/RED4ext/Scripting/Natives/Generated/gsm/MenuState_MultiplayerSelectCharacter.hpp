#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/MenuState.hpp>

namespace RED4ext
{
namespace gsm
{
struct MenuState_MultiplayerSelectCharacter : gsm::MenuState
{
    static constexpr const char* NAME = "gsmMenuState_MultiplayerSelectCharacter";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MenuState_MultiplayerSelectCharacter, 0xD8);
} // namespace gsm
using gsmMenuState_MultiplayerSelectCharacter = gsm::MenuState_MultiplayerSelectCharacter;
} // namespace RED4ext

// clang-format on
