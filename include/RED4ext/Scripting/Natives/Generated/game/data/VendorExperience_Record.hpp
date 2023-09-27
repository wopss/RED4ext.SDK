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
struct VendorExperience_Record : game::data::VendorWare_Record
{
    static constexpr const char* NAME = "gamedataVendorExperience_Record";
    static constexpr const char* ALIAS = "VendorExperience_Record";

    uint8_t unk78[0x90 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(VendorExperience_Record, 0x90);
} // namespace game::data
using gamedataVendorExperience_Record = game::data::VendorExperience_Record;
using VendorExperience_Record = game::data::VendorExperience_Record;
} // namespace RED4ext

// clang-format on
