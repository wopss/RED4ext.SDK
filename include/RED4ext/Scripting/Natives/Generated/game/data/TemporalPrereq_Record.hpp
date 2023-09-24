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
struct TemporalPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataTemporalPrereq_Record";
    static constexpr const char* ALIAS = "TemporalPrereq_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TemporalPrereq_Record, 0x68);
} // namespace game::data
using gamedataTemporalPrereq_Record = game::data::TemporalPrereq_Record;
using TemporalPrereq_Record = game::data::TemporalPrereq_Record;
} // namespace RED4ext

// clang-format on
