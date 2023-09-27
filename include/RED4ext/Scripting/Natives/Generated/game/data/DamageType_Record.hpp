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
struct DamageType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDamageType_Record";
    static constexpr const char* ALIAS = "DamageType_Record";

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DamageType_Record, 0x80);
} // namespace game::data
using gamedataDamageType_Record = game::data::DamageType_Record;
using DamageType_Record = game::data::DamageType_Record;
} // namespace RED4ext

// clang-format on
