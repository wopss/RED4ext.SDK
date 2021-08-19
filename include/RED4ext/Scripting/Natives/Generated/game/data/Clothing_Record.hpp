#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Clothing_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataClothing_Record";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Clothing_Record, 0x130);
} // namespace game::data
} // namespace RED4ext
