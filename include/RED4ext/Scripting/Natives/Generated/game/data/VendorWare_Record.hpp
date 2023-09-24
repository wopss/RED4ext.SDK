#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct VendorWare_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVendorWare_Record";
    static constexpr const char* ALIAS = "VendorWare_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VendorWare_Record, 0x78);
} // namespace game::data
using gamedataVendorWare_Record = game::data::VendorWare_Record;
using VendorWare_Record = game::data::VendorWare_Record;
} // namespace RED4ext

// clang-format on
