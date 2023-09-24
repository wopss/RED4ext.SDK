#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinUIRuntimeProfile_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct MappinUISettings_Record : game::data::MappinUIRuntimeProfile_Record
{
    static constexpr const char* NAME = "gamedataMappinUISettings_Record";
    static constexpr const char* ALIAS = "MappinUISettings_Record";

    uint8_t unk180[0x198 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(MappinUISettings_Record, 0x198);
} // namespace game::data
using gamedataMappinUISettings_Record = game::data::MappinUISettings_Record;
using MappinUISettings_Record = game::data::MappinUISettings_Record;
} // namespace RED4ext

// clang-format on
