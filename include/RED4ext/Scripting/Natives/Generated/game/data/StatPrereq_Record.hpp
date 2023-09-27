#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct StatPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataStatPrereq_Record";
    static constexpr const char* ALIAS = "StatPrereq_Record";

    uint8_t unk58[0xB0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(StatPrereq_Record, 0xB0);
} // namespace game::data
using gamedataStatPrereq_Record = game::data::StatPrereq_Record;
using StatPrereq_Record = game::data::StatPrereq_Record;
} // namespace RED4ext

// clang-format on
