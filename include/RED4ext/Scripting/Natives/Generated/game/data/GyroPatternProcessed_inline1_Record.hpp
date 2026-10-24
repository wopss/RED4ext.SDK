#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GyroProcessedAxis_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct GyroPatternProcessed_inline1_Record : game::data::GyroProcessedAxis_Record
{
    static constexpr const char* NAME = "gamedataGyroPatternProcessed_inline1_Record";
    static constexpr const char* ALIAS = "GyroPatternProcessed_inline1_Record";

};
RED4EXT_ASSERT_SIZE(GyroPatternProcessed_inline1_Record, 0x60);
} // namespace game::data
using gamedataGyroPatternProcessed_inline1_Record = game::data::GyroPatternProcessed_inline1_Record;
using GyroPatternProcessed_inline1_Record = game::data::GyroPatternProcessed_inline1_Record;
} // namespace RED4ext

// clang-format on
