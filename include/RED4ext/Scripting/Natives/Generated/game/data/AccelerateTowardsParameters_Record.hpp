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
struct AccelerateTowardsParameters_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataAccelerateTowardsParameters_Record";
    static constexpr const char* ALIAS = "AccelerateTowardsParameters_Record";

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AccelerateTowardsParameters_Record, 0xA0);
} // namespace game::data
using gamedataAccelerateTowardsParameters_Record = game::data::AccelerateTowardsParameters_Record;
using AccelerateTowardsParameters_Record = game::data::AccelerateTowardsParameters_Record;
} // namespace RED4ext

// clang-format on
