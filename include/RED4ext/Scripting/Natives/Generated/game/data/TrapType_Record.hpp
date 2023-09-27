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
struct TrapType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTrapType_Record";
    static constexpr const char* ALIAS = "TrapType_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TrapType_Record, 0x58);
} // namespace game::data
using gamedataTrapType_Record = game::data::TrapType_Record;
using TrapType_Record = game::data::TrapType_Record;
} // namespace RED4ext

// clang-format on
