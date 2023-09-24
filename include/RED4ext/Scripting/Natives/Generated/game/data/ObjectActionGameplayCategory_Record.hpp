#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ScannableData_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ObjectActionGameplayCategory_Record : game::data::ScannableData_Record
{
    static constexpr const char* NAME = "gamedataObjectActionGameplayCategory_Record";
    static constexpr const char* ALIAS = "ObjectActionGameplayCategory_Record";

};
RED4EXT_ASSERT_SIZE(ObjectActionGameplayCategory_Record, 0x88);
} // namespace game::data
using gamedataObjectActionGameplayCategory_Record = game::data::ObjectActionGameplayCategory_Record;
using ObjectActionGameplayCategory_Record = game::data::ObjectActionGameplayCategory_Record;
} // namespace RED4ext

// clang-format on
