#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProjectileLaunch_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Regular_Record : game::data::ProjectileLaunch_Record
{
    static constexpr const char* NAME = "gamedataRegular_Record";
    static constexpr const char* ALIAS = "Regular_Record";

    uint8_t unk70[0x88 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(Regular_Record, 0x88);
} // namespace game::data
using gamedataRegular_Record = game::data::Regular_Record;
using Regular_Record = game::data::Regular_Record;
} // namespace RED4ext

// clang-format on
