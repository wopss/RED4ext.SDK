#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Accuracy_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct LinearAccuracy_Record : game::data::Accuracy_Record
{
    static constexpr const char* NAME = "gamedataLinearAccuracy_Record";
    static constexpr const char* ALIAS = "LinearAccuracy_Record";

    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(LinearAccuracy_Record, 0x70);
} // namespace game::data
using gamedataLinearAccuracy_Record = game::data::LinearAccuracy_Record;
using LinearAccuracy_Record = game::data::LinearAccuracy_Record;
} // namespace RED4ext

// clang-format on
