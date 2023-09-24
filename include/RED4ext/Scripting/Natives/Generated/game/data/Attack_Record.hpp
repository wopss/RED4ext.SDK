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
struct Attack_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAttack_Record";
    static constexpr const char* ALIAS = "Attack_Record";

    uint8_t unk48[0x108 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Attack_Record, 0x108);
} // namespace game::data
using gamedataAttack_Record = game::data::Attack_Record;
using Attack_Record = game::data::Attack_Record;
} // namespace RED4ext

// clang-format on
