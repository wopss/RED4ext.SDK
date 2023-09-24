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
struct WorldMapFreeCameraSettings_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataWorldMapFreeCameraSettings_Record";
    static constexpr const char* ALIAS = "WorldMapFreeCameraSettings_Record";

    uint8_t unk48[0x150 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(WorldMapFreeCameraSettings_Record, 0x150);
} // namespace game::data
using gamedataWorldMapFreeCameraSettings_Record = game::data::WorldMapFreeCameraSettings_Record;
using WorldMapFreeCameraSettings_Record = game::data::WorldMapFreeCameraSettings_Record;
} // namespace RED4ext

// clang-format on
