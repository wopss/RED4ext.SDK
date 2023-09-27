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
struct WorldMapZoomLevel_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataWorldMapZoomLevel_Record";
    static constexpr const char* ALIAS = "WorldMapZoomLevel_Record";

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WorldMapZoomLevel_Record, 0xB8);
} // namespace game::data
using gamedataWorldMapZoomLevel_Record = game::data::WorldMapZoomLevel_Record;
using WorldMapZoomLevel_Record = game::data::WorldMapZoomLevel_Record;
} // namespace RED4ext

// clang-format on
