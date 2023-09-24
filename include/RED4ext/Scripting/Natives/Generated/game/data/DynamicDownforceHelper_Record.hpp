#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/DriveHelper_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct DynamicDownforceHelper_Record : game::data::DriveHelper_Record
{
    static constexpr const char* NAME = "gamedataDynamicDownforceHelper_Record";
    static constexpr const char* ALIAS = "DynamicDownforceHelper_Record";

    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(DynamicDownforceHelper_Record, 0x88);
} // namespace game::data
using gamedataDynamicDownforceHelper_Record = game::data::DynamicDownforceHelper_Record;
using DynamicDownforceHelper_Record = game::data::DynamicDownforceHelper_Record;
} // namespace RED4ext

// clang-format on
