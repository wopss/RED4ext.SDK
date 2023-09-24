#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Weakspot_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataWeakspot_Record";
    static constexpr const char* ALIAS = "Weakspot_Record";

    uint8_t unkF8[0x128 - 0xF8]; // F8
};
RED4EXT_ASSERT_SIZE(Weakspot_Record, 0x128);
} // namespace game::data
using gamedataWeakspot_Record = game::data::Weakspot_Record;
using Weakspot_Record = game::data::Weakspot_Record;
} // namespace RED4ext

// clang-format on
