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
struct MappinUIParamGroup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMappinUIParamGroup_Record";
    static constexpr const char* ALIAS = "MappinUIParamGroup_Record";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MappinUIParamGroup_Record, 0xA0);
} // namespace game::data
using gamedataMappinUIParamGroup_Record = game::data::MappinUIParamGroup_Record;
using MappinUIParamGroup_Record = game::data::MappinUIParamGroup_Record;
} // namespace RED4ext

// clang-format on
