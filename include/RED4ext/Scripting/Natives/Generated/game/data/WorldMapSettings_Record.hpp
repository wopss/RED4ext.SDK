#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct WorldMapSettings_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataWorldMapSettings_Record";
    static constexpr const char* ALIAS = "WorldMapSettings_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WorldMapSettings_Record, 0x70);
} // namespace game::data
using WorldMapSettings_Record = game::data::WorldMapSettings_Record;
} // namespace RED4ext
