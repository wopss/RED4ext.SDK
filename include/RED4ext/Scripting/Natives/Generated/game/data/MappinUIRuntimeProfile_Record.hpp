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
struct MappinUIRuntimeProfile_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMappinUIRuntimeProfile_Record";
    static constexpr const char* ALIAS = "MappinUIRuntimeProfile_Record";

    uint8_t unk48[0x180 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MappinUIRuntimeProfile_Record, 0x180);
} // namespace game::data
using gamedataMappinUIRuntimeProfile_Record = game::data::MappinUIRuntimeProfile_Record;
using MappinUIRuntimeProfile_Record = game::data::MappinUIRuntimeProfile_Record;
} // namespace RED4ext

// clang-format on
