#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct Curve_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataCurve_Record";
    static constexpr const char* ALIAS = "Curve_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Curve_Record, 0x50);
} // namespace game::data
using Curve_Record = game::data::Curve_Record;
} // namespace RED4ext
