#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Base_MappinDefinition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct MappinDefinition_Record : game::data::Base_MappinDefinition_Record
{
    static constexpr const char* NAME = "gamedataMappinDefinition_Record";
    static constexpr const char* ALIAS = "MappinDefinition_Record";

    uint8_t unk78[0x88 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(MappinDefinition_Record, 0x88);
} // namespace game::data
using gamedataMappinDefinition_Record = game::data::MappinDefinition_Record;
using MappinDefinition_Record = game::data::MappinDefinition_Record;
} // namespace RED4ext

// clang-format on
