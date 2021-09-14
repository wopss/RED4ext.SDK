#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct MovementPolicy_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMovementPolicy_Record";
    static constexpr const char* ALIAS = "MovementPolicy_Record";

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MovementPolicy_Record, 0xD8);
} // namespace game::data
using MovementPolicy_Record = game::data::MovementPolicy_Record;
} // namespace RED4ext
