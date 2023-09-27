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
struct PerkArea_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataPerkArea_Record";
    static constexpr const char* ALIAS = "PerkArea_Record";

    uint8_t unk48[0xE0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PerkArea_Record, 0xE0);
} // namespace game::data
using gamedataPerkArea_Record = game::data::PerkArea_Record;
using PerkArea_Record = game::data::PerkArea_Record;
} // namespace RED4ext

// clang-format on
