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
struct SceneCameraDoF_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataSceneCameraDoF_Record";
    static constexpr const char* ALIAS = "SceneCameraDoF_Record";

    uint8_t unk48[0xA8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SceneCameraDoF_Record, 0xA8);
} // namespace game::data
using gamedataSceneCameraDoF_Record = game::data::SceneCameraDoF_Record;
using SceneCameraDoF_Record = game::data::SceneCameraDoF_Record;
} // namespace RED4ext

// clang-format on
