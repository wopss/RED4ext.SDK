#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatPoolPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ConsumableChargesPrereq_Record : game::data::StatPoolPrereq_Record
{
    static constexpr const char* NAME = "gamedataConsumableChargesPrereq_Record";
    static constexpr const char* ALIAS = "ConsumableChargesPrereq_Record";

};
RED4EXT_ASSERT_SIZE(ConsumableChargesPrereq_Record, 0xB0);
} // namespace game::data
using gamedataConsumableChargesPrereq_Record = game::data::ConsumableChargesPrereq_Record;
using ConsumableChargesPrereq_Record = game::data::ConsumableChargesPrereq_Record;
} // namespace RED4ext

// clang-format on
