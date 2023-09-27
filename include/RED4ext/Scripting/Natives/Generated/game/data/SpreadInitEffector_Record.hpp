#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct SpreadInitEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataSpreadInitEffector_Record";
    static constexpr const char* ALIAS = "SpreadInitEffector_Record";

    uint8_t unk88[0xC8 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(SpreadInitEffector_Record, 0xC8);
} // namespace game::data
using gamedataSpreadInitEffector_Record = game::data::SpreadInitEffector_Record;
using SpreadInitEffector_Record = game::data::SpreadInitEffector_Record;
} // namespace RED4ext

// clang-format on
