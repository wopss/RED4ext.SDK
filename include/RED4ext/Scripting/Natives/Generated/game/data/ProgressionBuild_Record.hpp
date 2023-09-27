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
struct ProgressionBuild_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataProgressionBuild_Record";
    static constexpr const char* ALIAS = "ProgressionBuild_Record";

    uint8_t unk48[0x148 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ProgressionBuild_Record, 0x148);
} // namespace game::data
using gamedataProgressionBuild_Record = game::data::ProgressionBuild_Record;
using ProgressionBuild_Record = game::data::ProgressionBuild_Record;
} // namespace RED4ext

// clang-format on
