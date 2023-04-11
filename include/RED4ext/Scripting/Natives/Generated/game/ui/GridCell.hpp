#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game::data { struct MiniGame_Trap_Record; }

namespace game::ui
{
struct GridCell
{
    static constexpr const char* NAME = "gameuiGridCell";
    static constexpr const char* ALIAS = "GridCell";

    int32_t rarityValue; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    Handle<game::data::MiniGame_Trap_Record> currentTrap; // 08
    bool isActive; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(GridCell, 0x20);
} // namespace game::ui
using gameuiGridCell = game::ui::GridCell;
using GridCell = game::ui::GridCell;
} // namespace RED4ext

// clang-format on
