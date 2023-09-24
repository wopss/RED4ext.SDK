#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ContinuousEffector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ContinuousAttackEffector_Record : game::data::ContinuousEffector_Record
{
    static constexpr const char* NAME = "gamedataContinuousAttackEffector_Record";
    static constexpr const char* ALIAS = "ContinuousAttackEffector_Record";

    uint8_t unkA0[0xB0 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(ContinuousAttackEffector_Record, 0xB0);
} // namespace game::data
using gamedataContinuousAttackEffector_Record = game::data::ContinuousAttackEffector_Record;
using ContinuousAttackEffector_Record = game::data::ContinuousAttackEffector_Record;
} // namespace RED4ext

// clang-format on
