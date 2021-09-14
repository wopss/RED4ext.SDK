#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseSign_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct GenericStreetNameSign_Record : game::data::BaseSign_Record
{
    static constexpr const char* NAME = "gamedataGenericStreetNameSign_Record";
    static constexpr const char* ALIAS = "GenericStreetNameSign_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(GenericStreetNameSign_Record, 0x68);
} // namespace game::data
using GenericStreetNameSign_Record = game::data::GenericStreetNameSign_Record;
} // namespace RED4ext
