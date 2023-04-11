#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ICharacterCustomizationState : IScriptable
{
    static constexpr const char* NAME = "gameuiICharacterCustomizationState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICharacterCustomizationState, 0x40);
} // namespace game::ui
using gameuiICharacterCustomizationState = game::ui::ICharacterCustomizationState;
} // namespace RED4ext

// clang-format on
