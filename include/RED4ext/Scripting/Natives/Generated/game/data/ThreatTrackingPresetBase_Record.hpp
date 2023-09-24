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
struct ThreatTrackingPresetBase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataThreatTrackingPresetBase_Record";
    static constexpr const char* ALIAS = "ThreatTrackingPresetBase_Record";

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ThreatTrackingPresetBase_Record, 0xB8);
} // namespace game::data
using gamedataThreatTrackingPresetBase_Record = game::data::ThreatTrackingPresetBase_Record;
using ThreatTrackingPresetBase_Record = game::data::ThreatTrackingPresetBase_Record;
} // namespace RED4ext

// clang-format on
