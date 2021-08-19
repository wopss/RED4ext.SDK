#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::weapon { 
struct IFxPackage : IScriptable
{
    static constexpr const char* NAME = "gameweaponIFxPackage";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IFxPackage, 0x40);
} // namespace game::weapon
} // namespace RED4ext
