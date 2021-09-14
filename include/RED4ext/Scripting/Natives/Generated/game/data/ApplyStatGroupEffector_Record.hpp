#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ApplyStatGroupEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataApplyStatGroupEffector_Record";
    static constexpr const char* ALIAS = "ApplyStatGroupEffector_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ApplyStatGroupEffector_Record, 0x60);
} // namespace game::data
using ApplyStatGroupEffector_Record = game::data::ApplyStatGroupEffector_Record;
} // namespace RED4ext
