#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink
{
struct MoveToTopOfMenu : ink::UserData
{
    static constexpr const char* NAME = "inkMoveToTopOfMenu";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MoveToTopOfMenu, 0x40);
} // namespace ink
using inkMoveToTopOfMenu = ink::MoveToTopOfMenu;
} // namespace RED4ext

// clang-format on
