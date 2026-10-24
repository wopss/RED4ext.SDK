#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Vendor_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Glamdoc_Record : game::data::Vendor_Record
{
    static constexpr const char* NAME = "gamedataGlamdoc_Record";
    static constexpr const char* ALIAS = "Glamdoc_Record";

    uint8_t unk100[0x110 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(Glamdoc_Record, 0x110);
} // namespace game::data
using gamedataGlamdoc_Record = game::data::Glamdoc_Record;
using Glamdoc_Record = game::data::Glamdoc_Record;
} // namespace RED4ext

// clang-format on
