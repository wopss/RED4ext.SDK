#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIActionSubCondition_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AINPCTypeCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAINPCTypeCond_Record";
    static constexpr const char* ALIAS = "AINPCTypeCond_Record";

    uint8_t unk58[0x98 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AINPCTypeCond_Record, 0x98);
} // namespace game::data
using gamedataAINPCTypeCond_Record = game::data::AINPCTypeCond_Record;
using AINPCTypeCond_Record = game::data::AINPCTypeCond_Record;
} // namespace RED4ext

// clang-format on
