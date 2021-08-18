#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ContinuousEffector_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ContinuousAttackEffector_Record : game::data::ContinuousEffector_Record
{
    static constexpr const char* NAME = "gamedataContinuousAttackEffector_Record";
    static constexpr const char* ALIAS = "ContinuousAttackEffector_Record";

    uint8_t unk60[0x68 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(ContinuousAttackEffector_Record, 0x68);
} // namespace game::data
using ContinuousAttackEffector_Record = game::data::ContinuousAttackEffector_Record;
} // namespace RED4ext
