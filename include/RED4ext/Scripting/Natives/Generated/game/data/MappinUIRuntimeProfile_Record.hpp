#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct MappinUIRuntimeProfile_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataMappinUIRuntimeProfile_Record";
    static constexpr const char* ALIAS = "MappinUIRuntimeProfile_Record";

    uint8_t unk48[0x98 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(MappinUIRuntimeProfile_Record, 0x98);
} // namespace game::data
using MappinUIRuntimeProfile_Record = game::data::MappinUIRuntimeProfile_Record;
} // namespace RED4ext
