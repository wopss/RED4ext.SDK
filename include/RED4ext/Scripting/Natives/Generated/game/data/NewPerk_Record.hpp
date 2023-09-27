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
struct NewPerk_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataNewPerk_Record";
    static constexpr const char* ALIAS = "NewPerk_Record";

    uint8_t unk48[0x128 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NewPerk_Record, 0x128);
} // namespace game::data
using gamedataNewPerk_Record = game::data::NewPerk_Record;
using NewPerk_Record = game::data::NewPerk_Record;
} // namespace RED4ext

// clang-format on
