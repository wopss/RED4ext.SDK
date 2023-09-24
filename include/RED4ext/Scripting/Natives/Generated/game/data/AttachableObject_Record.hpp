#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AttachableObject_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataAttachableObject_Record";
    static constexpr const char* ALIAS = "AttachableObject_Record";

};
RED4EXT_ASSERT_SIZE(AttachableObject_Record, 0xF8);
} // namespace game::data
using gamedataAttachableObject_Record = game::data::AttachableObject_Record;
using AttachableObject_Record = game::data::AttachableObject_Record;
} // namespace RED4ext

// clang-format on
