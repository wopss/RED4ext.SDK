#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct MovementParams_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMovementParams_Record";
    static constexpr const char* ALIAS = "MovementParams_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MovementParams_Record, 0x50);
} // namespace game::data
using MovementParams_Record = game::data::MovementParams_Record;
} // namespace RED4ext
