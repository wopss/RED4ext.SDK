#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct IIconAtlas : IScriptable
{
    static constexpr const char* NAME = "inkIIconAtlas";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IIconAtlas, 0x40);
} // namespace ink
using inkIIconAtlas = ink::IIconAtlas;
} // namespace RED4ext

// clang-format on
