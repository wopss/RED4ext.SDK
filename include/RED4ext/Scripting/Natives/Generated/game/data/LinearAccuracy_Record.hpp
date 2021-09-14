#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Accuracy_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct LinearAccuracy_Record : game::data::Accuracy_Record
{
    static constexpr const char* NAME = "gamedataLinearAccuracy_Record";
    static constexpr const char* ALIAS = "LinearAccuracy_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(LinearAccuracy_Record, 0x58);
} // namespace game::data
using LinearAccuracy_Record = game::data::LinearAccuracy_Record;
} // namespace RED4ext
