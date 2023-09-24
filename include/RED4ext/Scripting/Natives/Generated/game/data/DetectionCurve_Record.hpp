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
struct DetectionCurve_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataDetectionCurve_Record";
    static constexpr const char* ALIAS = "DetectionCurve_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DetectionCurve_Record, 0x70);
} // namespace game::data
using gamedataDetectionCurve_Record = game::data::DetectionCurve_Record;
using DetectionCurve_Record = game::data::DetectionCurve_Record;
} // namespace RED4ext

// clang-format on
