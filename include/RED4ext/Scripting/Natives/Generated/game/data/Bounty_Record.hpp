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
struct Bounty_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataBounty_Record";
    static constexpr const char* ALIAS = "Bounty_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Bounty_Record, 0x90);
} // namespace game::data
using gamedataBounty_Record = game::data::Bounty_Record;
using Bounty_Record = game::data::Bounty_Record;
} // namespace RED4ext

// clang-format on
