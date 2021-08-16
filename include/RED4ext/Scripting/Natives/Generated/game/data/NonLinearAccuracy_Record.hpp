#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Accuracy_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct NonLinearAccuracy_Record : game::data::Accuracy_Record
{
    static constexpr const char* NAME = "gamedataNonLinearAccuracy_Record";
    static constexpr const char* ALIAS = "NonLinearAccuracy_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(NonLinearAccuracy_Record, 0x58);
} // namespace game::data
using NonLinearAccuracy_Record = game::data::NonLinearAccuracy_Record;
} // namespace RED4ext
