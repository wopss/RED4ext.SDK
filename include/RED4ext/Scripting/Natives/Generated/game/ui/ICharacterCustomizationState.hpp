#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ICharacterCustomizationState : IScriptable
{
    static constexpr const char* NAME = "gameuiICharacterCustomizationState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ICharacterCustomizationState, 0x40);
} // namespace game::ui
} // namespace RED4ext
