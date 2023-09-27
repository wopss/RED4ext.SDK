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
struct StatPoolPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataStatPoolPrereq_Record";
    static constexpr const char* ALIAS = "StatPoolPrereq_Record";

    uint8_t unk58[0xB0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(StatPoolPrereq_Record, 0xB0);
} // namespace game::data
using gamedataStatPoolPrereq_Record = game::data::StatPoolPrereq_Record;
using StatPoolPrereq_Record = game::data::StatPoolPrereq_Record;
} // namespace RED4ext

// clang-format on
