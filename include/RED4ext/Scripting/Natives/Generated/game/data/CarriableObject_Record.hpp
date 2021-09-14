#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct CarriableObject_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataCarriableObject_Record";
    static constexpr const char* ALIAS = "CarriableObject_Record";

};
RED4EXT_ASSERT_SIZE(CarriableObject_Record, 0x78);
} // namespace game::data
using CarriableObject_Record = game::data::CarriableObject_Record;
} // namespace RED4ext
