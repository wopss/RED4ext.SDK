#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Children.hpp>

namespace RED4ext
{
namespace ink
{
struct NoChildren : ink::Children
{
    static constexpr const char* NAME = "inkNoChildren";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(NoChildren, 0x30);
} // namespace ink
using inkNoChildren = ink::NoChildren;
} // namespace RED4ext

// clang-format on
