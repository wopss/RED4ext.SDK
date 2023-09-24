#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ContentAssignment_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ValueAssignment_Record : game::data::ContentAssignment_Record
{
    static constexpr const char* NAME = "gamedataValueAssignment_Record";
    static constexpr const char* ALIAS = "ValueAssignment_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(ValueAssignment_Record, 0x70);
} // namespace game::data
using gamedataValueAssignment_Record = game::data::ValueAssignment_Record;
using ValueAssignment_Record = game::data::ValueAssignment_Record;
} // namespace RED4ext

// clang-format on
