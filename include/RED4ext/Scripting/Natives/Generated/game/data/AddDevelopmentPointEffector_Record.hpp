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
struct AddDevelopmentPointEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataAddDevelopmentPointEffector_Record";
    static constexpr const char* ALIAS = "AddDevelopmentPointEffector_Record";

    uint8_t unk88[0xA0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(AddDevelopmentPointEffector_Record, 0xA0);
} // namespace game::data
using gamedataAddDevelopmentPointEffector_Record = game::data::AddDevelopmentPointEffector_Record;
using AddDevelopmentPointEffector_Record = game::data::AddDevelopmentPointEffector_Record;
} // namespace RED4ext

// clang-format on
