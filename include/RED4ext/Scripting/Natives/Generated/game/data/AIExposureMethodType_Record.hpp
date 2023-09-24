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
struct AIExposureMethodType_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAIExposureMethodType_Record";
    static constexpr const char* ALIAS = "AIExposureMethodType_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIExposureMethodType_Record, 0x70);
} // namespace game::data
using gamedataAIExposureMethodType_Record = game::data::AIExposureMethodType_Record;
using AIExposureMethodType_Record = game::data::AIExposureMethodType_Record;
} // namespace RED4ext

// clang-format on
