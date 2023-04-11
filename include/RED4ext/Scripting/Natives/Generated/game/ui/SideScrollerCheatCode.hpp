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
struct SideScrollerCheatCode
{
    static constexpr const char* NAME = "gameuiSideScrollerCheatCode";
    static constexpr const char* ALIAS = "SideScrollerCheatCodeAdvanced";

    CName name; // 00
    DynArray<CName> keys; // 08
};
RED4EXT_ASSERT_SIZE(SideScrollerCheatCode, 0x18);
} // namespace game::ui
using gameuiSideScrollerCheatCode = game::ui::SideScrollerCheatCode;
using SideScrollerCheatCodeAdvanced = game::ui::SideScrollerCheatCode;
} // namespace RED4ext

// clang-format on
