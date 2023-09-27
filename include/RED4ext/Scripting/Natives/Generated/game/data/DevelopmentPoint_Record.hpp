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
struct DevelopmentPoint_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDevelopmentPoint_Record";
    static constexpr const char* ALIAS = "DevelopmentPoint_Record";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DevelopmentPoint_Record, 0x68);
} // namespace game::data
using gamedataDevelopmentPoint_Record = game::data::DevelopmentPoint_Record;
using DevelopmentPoint_Record = game::data::DevelopmentPoint_Record;
} // namespace RED4ext

// clang-format on
