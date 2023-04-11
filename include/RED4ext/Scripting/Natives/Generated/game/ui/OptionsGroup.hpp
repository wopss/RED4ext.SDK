#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game::ui
{
struct OptionsGroup
{
    static constexpr const char* NAME = "gameuiOptionsGroup";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    DynArray<CName> options; // 08
};
RED4EXT_ASSERT_SIZE(OptionsGroup, 0x18);
} // namespace game::ui
using gameuiOptionsGroup = game::ui::OptionsGroup;
} // namespace RED4ext

// clang-format on
