#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct StatPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataStatPrereq_Record";
    static constexpr const char* ALIAS = "StatPrereq_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(StatPrereq_Record, 0x60);
} // namespace game::data
using StatPrereq_Record = game::data::StatPrereq_Record;
} // namespace RED4ext
