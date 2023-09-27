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
struct UncontrolledMovementEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataUncontrolledMovementEffector_Record";
    static constexpr const char* ALIAS = "UncontrolledMovementEffector_Record";

    uint8_t unk88[0xB0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(UncontrolledMovementEffector_Record, 0xB0);
} // namespace game::data
using gamedataUncontrolledMovementEffector_Record = game::data::UncontrolledMovementEffector_Record;
using UncontrolledMovementEffector_Record = game::data::UncontrolledMovementEffector_Record;
} // namespace RED4ext

// clang-format on
