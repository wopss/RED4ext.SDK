#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/Gadget_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Grenade_Record : game::data::Gadget_Record
{
    static constexpr const char* NAME = "gamedataGrenade_Record";
    static constexpr const char* ALIAS = "Grenade_Record";

    uint8_t unk178[0x1C0 - 0x178]; // 178
};
RED4EXT_ASSERT_SIZE(Grenade_Record, 0x1C0);
} // namespace game::data
using Grenade_Record = game::data::Grenade_Record;
} // namespace RED4ext
