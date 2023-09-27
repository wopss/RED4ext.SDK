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
struct Tracking_Record : game::data::ProjectileLaunch_Record
{
    static constexpr const char* NAME = "gamedataTracking_Record";
    static constexpr const char* ALIAS = "Tracking_Record";

    uint8_t unk70[0xD0 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(Tracking_Record, 0xD0);
} // namespace game::data
using gamedataTracking_Record = game::data::Tracking_Record;
using Tracking_Record = game::data::Tracking_Record;
} // namespace RED4ext

// clang-format on
