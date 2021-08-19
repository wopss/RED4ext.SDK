#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Base_MappinDefinition_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct MappinDefinition_Record : game::data::Base_MappinDefinition_Record
{
    static constexpr const char* NAME = "gamedataMappinDefinition_Record";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(MappinDefinition_Record, 0x60);
} // namespace game::data
} // namespace RED4ext
