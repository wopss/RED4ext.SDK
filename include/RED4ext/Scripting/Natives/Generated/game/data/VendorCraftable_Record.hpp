#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VendorWare_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct VendorCraftable_Record : game::data::VendorWare_Record
{
    static constexpr const char* NAME = "gamedataVendorCraftable_Record";
    static constexpr const char* ALIAS = "VendorCraftable_Record";

    uint8_t unk78[0x88 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(VendorCraftable_Record, 0x88);
} // namespace game::data
using gamedataVendorCraftable_Record = game::data::VendorCraftable_Record;
using VendorCraftable_Record = game::data::VendorCraftable_Record;
} // namespace RED4ext

// clang-format on
