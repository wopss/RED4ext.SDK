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
struct StatChangedPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataStatChangedPrereq_Record";
    static constexpr const char* ALIAS = "StatChangedPrereq_Record";

    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(StatChangedPrereq_Record, 0x80);
} // namespace game::data
using gamedataStatChangedPrereq_Record = game::data::StatChangedPrereq_Record;
using StatChangedPrereq_Record = game::data::StatChangedPrereq_Record;
} // namespace RED4ext

// clang-format on
