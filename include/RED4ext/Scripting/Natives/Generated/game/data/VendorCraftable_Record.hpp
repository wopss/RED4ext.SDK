#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VendorWare_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct VendorCraftable_Record : game::data::VendorWare_Record
{
    static constexpr const char* NAME = "gamedataVendorCraftable_Record";
    static constexpr const char* ALIAS = "VendorCraftable_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(VendorCraftable_Record, 0x60);
} // namespace game::data
using VendorCraftable_Record = game::data::VendorCraftable_Record;
} // namespace RED4ext
