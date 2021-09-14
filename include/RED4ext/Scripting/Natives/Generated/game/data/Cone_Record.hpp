#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SenseShape_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Cone_Record : game::data::SenseShape_Record
{
    static constexpr const char* NAME = "gamedataCone_Record";
    static constexpr const char* ALIAS = "Cone_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(Cone_Record, 0x60);
} // namespace game::data
using Cone_Record = game::data::Cone_Record;
} // namespace RED4ext
