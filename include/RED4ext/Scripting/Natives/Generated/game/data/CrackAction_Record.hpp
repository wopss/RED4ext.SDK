#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ItemAction_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct CrackAction_Record : game::data::ItemAction_Record
{
    static constexpr const char* NAME = "gamedataCrackAction_Record";
    static constexpr const char* ALIAS = "CrackAction_Record";

    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(CrackAction_Record, 0x90);
} // namespace game::data
using CrackAction_Record = game::data::CrackAction_Record;
} // namespace RED4ext
