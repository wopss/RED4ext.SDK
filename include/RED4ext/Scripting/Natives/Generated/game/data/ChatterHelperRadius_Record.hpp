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
struct ChatterHelperRadius_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataChatterHelperRadius_Record";
    static constexpr const char* ALIAS = "ChatterHelperRadius_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ChatterHelperRadius_Record, 0x60);
} // namespace game::data
using gamedataChatterHelperRadius_Record = game::data::ChatterHelperRadius_Record;
using ChatterHelperRadius_Record = game::data::ChatterHelperRadius_Record;
} // namespace RED4ext

// clang-format on
