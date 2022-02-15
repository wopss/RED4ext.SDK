#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct CrowdSlotMovementSettingsBase_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCrowdSlotMovementSettingsBase_Record";
    static constexpr const char* ALIAS = "CrowdSlotMovementSettingsBase_Record";

    uint8_t unk48[0xE0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CrowdSlotMovementSettingsBase_Record, 0xE0);
} // namespace game::data
using CrowdSlotMovementSettingsBase_Record = game::data::CrowdSlotMovementSettingsBase_Record;
} // namespace RED4ext
