#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Weakspot_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataWeakspot_Record";
    static constexpr const char* ALIAS = "Weakspot_Record";

    uint8_t unk78[0x88 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(Weakspot_Record, 0x88);
} // namespace game::data
using Weakspot_Record = game::data::Weakspot_Record;
} // namespace RED4ext
