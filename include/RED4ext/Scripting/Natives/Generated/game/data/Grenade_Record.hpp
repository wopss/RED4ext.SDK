#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Gadget_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Grenade_Record : game::data::Gadget_Record
{
    static constexpr const char* NAME = "gamedataGrenade_Record";
    static constexpr const char* ALIAS = "Grenade_Record";

    uint8_t unk1A8[0x218 - 0x1A8]; // 1A8
};
RED4EXT_ASSERT_SIZE(Grenade_Record, 0x218);
} // namespace game::data
using Grenade_Record = game::data::Grenade_Record;
} // namespace RED4ext
