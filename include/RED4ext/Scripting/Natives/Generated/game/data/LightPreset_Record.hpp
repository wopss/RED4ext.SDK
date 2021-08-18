#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct LightPreset_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataLightPreset_Record";
    static constexpr const char* ALIAS = "LightPreset_Record";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(LightPreset_Record, 0x68);
} // namespace game::data
using LightPreset_Record = game::data::LightPreset_Record;
} // namespace RED4ext
