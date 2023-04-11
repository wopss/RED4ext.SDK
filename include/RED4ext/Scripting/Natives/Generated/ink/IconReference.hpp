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
struct IconReference : IScriptable
{
    static constexpr const char* NAME = "inkIconReference";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IconReference, 0x40);
} // namespace ink
using inkIconReference = ink::IconReference;
} // namespace RED4ext

// clang-format on
