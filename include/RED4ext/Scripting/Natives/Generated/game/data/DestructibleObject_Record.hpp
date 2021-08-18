#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct DestructibleObject_Record : game::data::BaseObject_Record
{
    static constexpr const char* NAME = "gamedataDestructibleObject_Record";
    static constexpr const char* ALIAS = "DestructibleObject_Record";

};
RED4EXT_ASSERT_SIZE(DestructibleObject_Record, 0x60);
} // namespace game::data
using DestructibleObject_Record = game::data::DestructibleObject_Record;
} // namespace RED4ext
