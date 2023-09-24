#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Character_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct SubCharacter_Record : game::data::Character_Record
{
    static constexpr const char* NAME = "gamedataSubCharacter_Record";
    static constexpr const char* ALIAS = "SubCharacter_Record";

    uint8_t unk470[0x4B0 - 0x470]; // 470
};
RED4EXT_ASSERT_SIZE(SubCharacter_Record, 0x4B0);
} // namespace game::data
using gamedataSubCharacter_Record = game::data::SubCharacter_Record;
using SubCharacter_Record = game::data::SubCharacter_Record;
} // namespace RED4ext

// clang-format on
