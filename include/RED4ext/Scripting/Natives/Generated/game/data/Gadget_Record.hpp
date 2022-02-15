#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/WeaponItem_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Gadget_Record : game::data::WeaponItem_Record
{
    static constexpr const char* NAME = "gamedataGadget_Record";
    static constexpr const char* ALIAS = "Gadget_Record";

};
RED4EXT_ASSERT_SIZE(Gadget_Record, 0x1A8);
} // namespace game::data
using Gadget_Record = game::data::Gadget_Record;
} // namespace RED4ext
