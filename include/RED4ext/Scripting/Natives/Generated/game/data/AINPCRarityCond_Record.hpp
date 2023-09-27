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
struct AINPCRarityCond_Record : game::data::AIActionSubCondition_Record
{
    static constexpr const char* NAME = "gamedataAINPCRarityCond_Record";
    static constexpr const char* ALIAS = "AINPCRarityCond_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AINPCRarityCond_Record, 0x70);
} // namespace game::data
using gamedataAINPCRarityCond_Record = game::data::AINPCRarityCond_Record;
using AINPCRarityCond_Record = game::data::AINPCRarityCond_Record;
} // namespace RED4ext

// clang-format on
