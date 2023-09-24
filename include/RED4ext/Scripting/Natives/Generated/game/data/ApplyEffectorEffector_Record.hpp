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
struct ApplyEffectorEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataApplyEffectorEffector_Record";
    static constexpr const char* ALIAS = "ApplyEffectorEffector_Record";

    uint8_t unk88[0xA0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ApplyEffectorEffector_Record, 0xA0);
} // namespace game::data
using gamedataApplyEffectorEffector_Record = game::data::ApplyEffectorEffector_Record;
using ApplyEffectorEffector_Record = game::data::ApplyEffectorEffector_Record;
} // namespace RED4ext

// clang-format on
