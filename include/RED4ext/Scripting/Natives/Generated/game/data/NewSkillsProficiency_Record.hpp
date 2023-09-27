#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Proficiency_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct NewSkillsProficiency_Record : game::data::Proficiency_Record
{
    static constexpr const char* NAME = "gamedataNewSkillsProficiency_Record";
    static constexpr const char* ALIAS = "NewSkillsProficiency_Record";

};
RED4EXT_ASSERT_SIZE(NewSkillsProficiency_Record, 0x100);
} // namespace game::data
using gamedataNewSkillsProficiency_Record = game::data::NewSkillsProficiency_Record;
using NewSkillsProficiency_Record = game::data::NewSkillsProficiency_Record;
} // namespace RED4ext

// clang-format on
