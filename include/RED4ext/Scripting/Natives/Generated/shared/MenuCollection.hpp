#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/shared/MenuItem.hpp>

namespace RED4ext
{
namespace shared
{
struct MenuCollection
{
    static constexpr const char* NAME = "sharedMenuCollection";
    static constexpr const char* ALIAS = NAME;

    DynArray<shared::MenuItem> items; // 00
};
RED4EXT_ASSERT_SIZE(MenuCollection, 0x10);
} // namespace shared
using sharedMenuCollection = shared::MenuCollection;
} // namespace RED4ext

// clang-format on
