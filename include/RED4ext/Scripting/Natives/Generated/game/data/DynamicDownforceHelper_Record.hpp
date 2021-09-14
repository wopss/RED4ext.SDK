#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DriveHelper_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct DynamicDownforceHelper_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataDynamicDownforceHelper_Record";
    static constexpr const char* ALIAS = "DynamicDownforceHelper_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(DynamicDownforceHelper_Record, 0x60);
} // namespace game::data
using DynamicDownforceHelper_Record = game::data::DynamicDownforceHelper_Record;
} // namespace RED4ext
