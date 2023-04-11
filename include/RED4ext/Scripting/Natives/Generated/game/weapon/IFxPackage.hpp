#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::weapon
{
struct IFxPackage : IScriptable
{
    static constexpr const char* NAME = "gameweaponIFxPackage";
    static constexpr const char* ALIAS = "IFxPackage";

};
RED4EXT_ASSERT_SIZE(IFxPackage, 0x40);
} // namespace game::weapon
using gameweaponIFxPackage = game::weapon::IFxPackage;
using IFxPackage = game::weapon::IFxPackage;
} // namespace RED4ext

// clang-format on
