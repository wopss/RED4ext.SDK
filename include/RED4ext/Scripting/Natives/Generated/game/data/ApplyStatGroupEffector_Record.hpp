#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ApplyStatGroupEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataApplyStatGroupEffector_Record";
    static constexpr const char* ALIAS = "ApplyStatGroupEffector_Record";

    uint8_t unk88[0xB0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ApplyStatGroupEffector_Record, 0xB0);
} // namespace game::data
using gamedataApplyStatGroupEffector_Record = game::data::ApplyStatGroupEffector_Record;
using ApplyStatGroupEffector_Record = game::data::ApplyStatGroupEffector_Record;
} // namespace RED4ext

// clang-format on
