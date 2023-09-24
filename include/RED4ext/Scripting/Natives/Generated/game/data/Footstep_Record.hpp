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
struct Footstep_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataFootstep_Record";
    static constexpr const char* ALIAS = "Footstep_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Footstep_Record, 0x70);
} // namespace game::data
using gamedataFootstep_Record = game::data::Footstep_Record;
using Footstep_Record = game::data::Footstep_Record;
} // namespace RED4ext

// clang-format on
