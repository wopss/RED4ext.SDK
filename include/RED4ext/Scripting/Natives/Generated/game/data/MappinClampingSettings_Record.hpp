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
struct MappinClampingSettings_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMappinClampingSettings_Record";
    static constexpr const char* ALIAS = "MappinClampingSettings_Record";

    uint8_t unk48[0x178 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MappinClampingSettings_Record, 0x178);
} // namespace game::data
using gamedataMappinClampingSettings_Record = game::data::MappinClampingSettings_Record;
using MappinClampingSettings_Record = game::data::MappinClampingSettings_Record;
} // namespace RED4ext

// clang-format on
