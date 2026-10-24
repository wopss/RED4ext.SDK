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
struct Tendency_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTendency_Record";
    static constexpr const char* ALIAS = "Tendency_Record";

    uint8_t unk48[0xA8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Tendency_Record, 0xA8);
} // namespace game::data
using gamedataTendency_Record = game::data::Tendency_Record;
using Tendency_Record = game::data::Tendency_Record;
} // namespace RED4ext

// clang-format on
