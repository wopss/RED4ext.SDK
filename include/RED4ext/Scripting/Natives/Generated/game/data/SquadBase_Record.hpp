#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct SquadBase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataSquadBase_Record";
    static constexpr const char* ALIAS = "SquadBase_Record";

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SquadBase_Record, 0xB8);
} // namespace game::data
using gamedataSquadBase_Record = game::data::SquadBase_Record;
using SquadBase_Record = game::data::SquadBase_Record;
} // namespace RED4ext

// clang-format on
