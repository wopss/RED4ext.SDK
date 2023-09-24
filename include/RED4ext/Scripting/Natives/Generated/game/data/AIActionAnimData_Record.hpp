#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIActionAnimData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIActionAnimData_Record";
    static constexpr const char* ALIAS = "AIActionAnimData_Record";

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionAnimData_Record, 0xB8);
} // namespace game::data
using gamedataAIActionAnimData_Record = game::data::AIActionAnimData_Record;
using AIActionAnimData_Record = game::data::AIActionAnimData_Record;
} // namespace RED4ext

// clang-format on
