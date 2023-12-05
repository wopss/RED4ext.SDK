#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ItemAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct CrackAction_Record : game::data::ItemAction_Record
{
    static constexpr const char* NAME = "gamedataCrackAction_Record";
    static constexpr const char* ALIAS = "CrackAction_Record";

    uint8_t unk160[0x170 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(CrackAction_Record, 0x170);
} // namespace game::data
using gamedataCrackAction_Record = game::data::CrackAction_Record;
using CrackAction_Record = game::data::CrackAction_Record;
} // namespace RED4ext

// clang-format on
