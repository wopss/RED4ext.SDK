#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/SpawnableObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Prop_Record : game::data::SpawnableObject_Record
{
    static constexpr const char* NAME = "gamedataProp_Record";
    static constexpr const char* ALIAS = "Prop_Record";

    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(Prop_Record, 0x80);
} // namespace game::data
using Prop_Record = game::data::Prop_Record;
} // namespace RED4ext
