#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseSign_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct GenericHighwaySign_Record : game::data::BaseSign_Record
{
    static constexpr const char* NAME = "gamedataGenericHighwaySign_Record";
    static constexpr const char* ALIAS = "GenericHighwaySign_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(GenericHighwaySign_Record, 0x68);
} // namespace game::data
using GenericHighwaySign_Record = game::data::GenericHighwaySign_Record;
} // namespace RED4ext
