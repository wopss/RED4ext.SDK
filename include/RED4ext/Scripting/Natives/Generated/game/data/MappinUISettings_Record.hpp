#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinUIRuntimeProfile_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct MappinUISettings_Record : game::data::MappinUIRuntimeProfile_Record
{
    static constexpr const char* NAME = "gamedataMappinUISettings_Record";
    static constexpr const char* ALIAS = "MappinUISettings_Record";

    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(MappinUISettings_Record, 0xA0);
} // namespace game::data
using MappinUISettings_Record = game::data::MappinUISettings_Record;
} // namespace RED4ext
