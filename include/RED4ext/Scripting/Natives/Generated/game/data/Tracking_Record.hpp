#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ProjectileLaunch_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Tracking_Record : game::data::ProjectileLaunch_Record
{
    static constexpr const char* NAME = "gamedataTracking_Record";
    static constexpr const char* ALIAS = "Tracking_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(Tracking_Record, 0x70);
} // namespace game::data
using Tracking_Record = game::data::Tracking_Record;
} // namespace RED4ext
