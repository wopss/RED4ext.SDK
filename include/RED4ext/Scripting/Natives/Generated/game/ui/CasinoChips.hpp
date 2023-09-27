#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game::ui
{
struct CasinoChips : game::Object
{
    static constexpr const char* NAME = "gameuiCasinoChips";
    static constexpr const char* ALIAS = "CasinoChips";

    DynArray<CName> digitNames; // 240
    DynArray<CName> flippedDigitNames; // 250
    uint8_t unk260[0x280 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(CasinoChips, 0x280);
} // namespace game::ui
using gameuiCasinoChips = game::ui::CasinoChips;
using CasinoChips = game::ui::CasinoChips;
} // namespace RED4ext

// clang-format on
