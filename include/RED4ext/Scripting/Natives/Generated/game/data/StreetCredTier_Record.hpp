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
struct StreetCredTier_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataStreetCredTier_Record";
    static constexpr const char* ALIAS = "StreetCredTier_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(StreetCredTier_Record, 0x58);
} // namespace game::data
using gamedataStreetCredTier_Record = game::data::StreetCredTier_Record;
using StreetCredTier_Record = game::data::StreetCredTier_Record;
} // namespace RED4ext

// clang-format on
